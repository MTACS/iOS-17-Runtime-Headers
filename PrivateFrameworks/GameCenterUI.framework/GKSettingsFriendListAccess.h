
@interface GKSettingsFriendListAccess : PSListController {
    NSDictionary * _gameSettings;
    NSArray * _games;
    PSSpecifier * _globalAccessSpecifier;
    bool  _loadingGames;
    GKLocalPlayer * _localPlayer;
}

@property (nonatomic, retain) NSDictionary *gameSettings;
@property (nonatomic, retain) NSArray *games;
@property (nonatomic) PSSpecifier *globalAccessSpecifier;
@property (nonatomic) bool loadingGames;
@property (nonatomic, retain) GKLocalPlayer *localPlayer;

- (void).cxx_destruct;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)dealloc;
- (id)gameSettings;
- (id)games;
- (id)globalAccessSpecifier;
- (bool)globalFriendListAccess;
- (id)globalFriendListAccessSpecifier;
- (id)individualBundleIDFriendListAccessSpecifier;
- (id)init;
- (bool)isFriendListSharingRestricted;
- (void)loadAllGames;
- (id)loadFreshSpecifiers;
- (bool)loadingGames;
- (id)loadingSpecifier;
- (id)localPlayer;
- (void)reloadWithClearLocalCache:(bool)arg1;
- (void)setGameSettings:(id)arg1;
- (void)setGames:(id)arg1;
- (void)setGlobalAccessSpecifier:(id)arg1;
- (void)setGlobalFriendListAccess:(struct __CFBoolean { }*)arg1 withSpecifier:(id)arg2;
- (void)setLoadingGames:(bool)arg1;
- (void)setLocalPlayer:(id)arg1;
- (id)specifiers;

@end
