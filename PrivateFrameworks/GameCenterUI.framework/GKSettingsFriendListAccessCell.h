
@interface GKSettingsFriendListAccessCell : PSSwitchTableCell {
    GKGame * _currentGame;
    GKGameSettingsInternal * _currentGameSettings;
}

@property (nonatomic, retain) GKGame *currentGame;
@property (nonatomic, retain) GKGameSettingsInternal *currentGameSettings;

+ (long long)cellStyle;

- (void).cxx_destruct;
- (bool)canReload;
- (void)controlChanged:(id)arg1;
- (id)currentGame;
- (id)currentGameSettings;
- (id)getSwitch;
- (void)layoutSubviews;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setCurrentGame:(id)arg1;
- (void)setCurrentGameSettings:(id)arg1;

@end
