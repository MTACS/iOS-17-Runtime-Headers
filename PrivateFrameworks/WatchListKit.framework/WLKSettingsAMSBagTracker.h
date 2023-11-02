
@interface WLKSettingsAMSBagTracker : NSObject {
    NSDictionary * _trackedBagKeys;
}

@property (nonatomic, retain) NSDictionary *trackedBagKeys;

+ (id)sharedTracker;

- (void).cxx_destruct;
- (bool)_amsBagBoolValueForKey:(id)arg1;
- (void)_setIsNowPlayingEnabled:(bool)arg1;
- (void)_setIsSportsEnabled:(bool)arg1;
- (void)_updateBoolValueForTrackedKey:(id)arg1;
- (void)_updateKeys:(id)arg1;
- (id)init;
- (id)isNowPlayingEnabled;
- (id)isSportsEnabled;
- (void)setTrackedBagKeys:(id)arg1;
- (id)trackedBagKeys;
- (void)updateTrackedBagValues;
- (void)updateTrackedBagValuesWithChangedKeys:(id)arg1;

@end
