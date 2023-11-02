
@interface ATXSessionTaggingAppEntity : NSObject {
    ATXModeEntityAffinityVector * _affinityVector;
    ATXModeEntityAffinityVector * _affinityVector_v2;
    NSString * _bundleId;
    ATXModeMetadataConstants * _modeMetadataConstants;
}

@property (nonatomic, readonly) ATXModeEntityAffinityVector *affinityVector;
@property (nonatomic, readonly) ATXModeEntityAffinityVector *affinityVector_v2;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) ATXModeMetadataConstants *modeMetadataConstants;

+ (id)genreIdForBundleId:(id)arg1;
+ (id)keyForBundleId:(id)arg1;

- (void).cxx_destruct;
- (void)_resetAffinityVectorToDefault;
- (void)_resetAffinityVectorToDefault_v2;
- (id)affinityVector;
- (id)affinityVector_v2;
- (id)bundleId;
- (id)entityKey;
- (id)initWithBundleId:(id)arg1 modeMetadataConstants:(id)arg2;
- (id)modeMetadataConstants;

@end
