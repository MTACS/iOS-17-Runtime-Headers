
@interface PGCustomFoodieAssetFilter : NSObject <PGAssetFilter> {
    CLSSceneConfidenceThresholdHelper * _drinkScenesHelper;
    CLSSceneConfidenceThresholdHelper * _foodScenesHelper;
    CLSSceneConfidenceThresholdHelper * _forbiddenScenesHelper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)name;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_passesWithAsset:(id)arg1 curationContext:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)filteredAssetsFromAssets:(id)arg1 curationContext:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
