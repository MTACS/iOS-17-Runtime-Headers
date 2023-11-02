
@interface FFMinimumPhaseInReleaseSubscription : FFSubscription {
    NSString * _minimumPhase;
    NSString * _targetRelease;
}

@property (nonatomic, readonly) NSString *minimumPhase;
@property (nonatomic, readonly) NSString *targetRelease;

+ (id)decodeFromDictionary:(id)arg1;
+ (id)mergeSubscriptions:(id)arg1;

- (void).cxx_destruct;
- (id)encodeToDictionary;
- (id)initWithPhase:(id)arg1 targetRelease:(id)arg2;
- (bool)matchesFeature:(id)arg1 inDomain:(id)arg2 inAlreadyLockedConfiguration:(id)arg3;
- (bool)matchesFeature:(id)arg1 inDomain:(id)arg2 inConfiguration:(id)arg3;
- (bool)matchesFeatureWithState:(id)arg1 inConfigurationOfUnknownLockState:(id)arg2;
- (id)minimumPhase;
- (id)nameOfClass;
- (id)targetRelease;

@end
