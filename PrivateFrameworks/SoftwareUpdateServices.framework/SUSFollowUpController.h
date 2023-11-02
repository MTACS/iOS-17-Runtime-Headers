
@interface SUSFollowUpController : NSObject {
    FLFollowUpController * _followUpController;
}

@property (nonatomic, retain) FLFollowUpController *followUpController;

+ (id)sharedController;
+ (id)stringForSUSFollowUpType:(unsigned long long)arg1;

- (void)SUSFollowUpControllerBadgeSettings:(id)arg1;
- (void)SUSFollowUpControllerUnbadgeSettings;
- (bool)_isCurrentlyPresentingFollowUpType:(unsigned long long)arg1 currentFollowUps:(id)arg2;
- (void)dealloc;
- (void)dismissAllSUFollowUps;
- (void)dismissFollowUpType:(unsigned long long)arg1;
- (void)dismissFollowUpTypes:(id)arg1;
- (void)dismissFollowUpWithIdentifiers:(id)arg1;
- (void)dismissLegacyFollowUps;
- (id)followUpController;
- (id)getCurrentSUSFollowUpItems;
- (id)identifierForSUFollowUpType:(unsigned long long)arg1;
- (id)identifiersForSUFollowUpTypes:(id)arg1;
- (id)init;
- (bool)isBadgeOnlyFollowUpCurrentlyBeingPresented;
- (bool)isCurrentlyPresentingFollowUpType:(unsigned long long)arg1;
- (bool)isCurrentlyPresentingFollowUpTypes:(id)arg1 presentationOption:(unsigned long long)arg2;
- (bool)isfollowUpSUSRelated:(id)arg1;
- (void)postFollowUpItem:(id)arg1;
- (void)postFollowUpOfType:(unsigned long long)arg1 withUpdate:(id)arg2 userInfo:(id)arg3;
- (void)setFollowUpController:(id)arg1;

@end
