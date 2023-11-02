
@interface SFBrowserMenuProvider : NSObject {
    long long  _persona;
    NSSet * _personaToCommandSetMap;
    NSDictionary * _personaToMenusMap;
    SFWebExtensionsController * _webExtensionsController;
}

@property (nonatomic, retain) SFWebExtensionsController *webExtensionsController;

+ (id)sharedProvider;

- (void).cxx_destruct;
- (id)_commandWithAction:(SEL)arg1 input:(id)arg2 modifierFlags:(long long)arg3 discoverabilityTitle:(id)arg4 wantsPriorityOverSystemBehavior:(bool)arg5 webInterceptable:(bool)arg6 property:(unsigned long long)arg7 alternates:(id)arg8;
- (id)_commandWithAction:(SEL)arg1 input:(id)arg2 modifierFlags:(long long)arg3 discoverabilityTitle:(id)arg4 webInterceptable:(bool)arg5;
- (id)_commandWithAction:(SEL)arg1 input:(id)arg2 modifierFlags:(long long)arg3 discoverabilityTitle:(id)arg4 webInterceptable:(bool)arg5 alternates:(id)arg6;
- (id)_commandWithAction:(SEL)arg1 input:(id)arg2 modifierFlags:(long long)arg3 discoverabilityTitle:(id)arg4 webInterceptable:(bool)arg5 property:(unsigned long long)arg6 alternates:(id)arg7;
- (id)_commandWithAction:(SEL)arg1 input:(id)arg2 modifierFlags:(long long)arg3 webInterceptable:(bool)arg4 property:(unsigned long long)arg5;
- (void)_enabledExtensionsDidChange;
- (id)_extensionsMenu;
- (id)_newDocumentCommands;
- (id)_placeholderCommandWithAction:(SEL)arg1 input:(id)arg2 modifierFlags:(long long)arg3 discoverabilityTitle:(id)arg4;
- (void)_setMenusForPersona:(long long)arg1 withBuilder:(id)arg2;
- (void)_setMenusIfNecessaryForPersona:(long long)arg1;
- (id)_switchToProfileCommands;
- (id)_switchToTabCommands;
- (void)clearCachedMenuForPersona:(long long)arg1;
- (bool)commandConflictsWithTextEditing:(id)arg1;
- (id)init;
- (void)rebuildMenuIfNeededForPersona:(long long)arg1;
- (void)setMenusForSafariWithBuilder:(id)arg1;
- (void)setMenusIfNecessaryForSafariViewServiceWithBuilder:(id)arg1;
- (void)setWebExtensionsController:(id)arg1;
- (id)webExtensionsController;

@end
