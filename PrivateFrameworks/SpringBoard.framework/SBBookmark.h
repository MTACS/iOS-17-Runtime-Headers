
@interface SBBookmark : SBHBookmark <UISApplicationStateServiceDataSource> {
    FBSApplicationDataStore * _dataStore;
    unsigned int  _hasBadgeValue;
}

@property (nonatomic, copy) <NSCopying> *badgeValue;
@property (nonatomic, readonly) FBSApplicationDataStore *dataStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *nextWakeDate;
@property (readonly) Class superclass;
@property (nonatomic) bool usesBackgroundNetwork;

- (void).cxx_destruct;
- (void)_noteIconDataSourceDidChange;
- (id)badgeNumberOrStringForIcon:(id)arg1;
- (id)badgeValue;
- (id)dataStore;
- (bool)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3;
- (id)initWithWebClip:(id)arg1;
- (bool)isTimedOutForIcon:(id)arg1;
- (void)setBadgeValue:(id)arg1;

@end
