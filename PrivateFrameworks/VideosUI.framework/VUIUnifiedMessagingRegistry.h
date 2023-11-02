
@interface VUIUnifiedMessagingRegistry : NSObject {
    NSPointerArray * _buttonViews;
    NSNumber * _hasFavoriteTeams;
    bool  _newTeamsAdded;
    bool  _teamsRemoved;
}

@property (nonatomic, retain) NSPointerArray *buttonViews;
@property (nonatomic, readonly) bool hasActiveButtons;
@property (nonatomic, readonly) NSNumber *hasFavoriteTeams;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_hasActiveButtonsNoLock;
- (void)_notifyButtonsChanged;
- (void)_notifyButtonsChangedAction;
- (id)buttonViews;
- (bool)hasActiveButtons;
- (id)hasFavoriteTeams;
- (id)init;
- (void)postNotificationFavoriteTeamsDidChange;
- (void)register:(long long)arg1 newTeamsAdded:(bool)arg2 teamsRemoved:(bool)arg3;
- (void)registerDownloadButton:(id)arg1;
- (void)setButtonViews:(id)arg1;
- (void)unRegisterDownloadButton:(id)arg1;

@end
