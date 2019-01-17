/** Double-include prevention */
#if defined _hideseek_included_
  #endinput
#endif
#define _hideseek_included_

public SharedPlugin:__pl_hideseek =
{
	name = "hideseek",
	file = "hideseek.smx",
	#if defined REQUIRE_PLUGIN
	required = 1,
	#else
	required = 0,
	#endif
};

#if !defined REQUIRE_PLUGIN
public __pl_hideseek_SetNTVOptional()
{
	MarkNativeAsOptional("Has_hideseek");
	MarkNativeAsOptional("Set_hideseek");
}
#endif
 
/**
 * Checks if the Player has Freeday.
 *
 * @param client    A client index.
 * @return        True / False.
 */
native Has_hideseek(client);

/**
 * Checks if the Player has Freeday.
 *
 * @param client    A client index.
 * @param direct   True = Freeday will be set directly / False = Freeday will be set next round.
 * @return        True / False.
 */
native Set_hideseek(client, bool:direct = true);