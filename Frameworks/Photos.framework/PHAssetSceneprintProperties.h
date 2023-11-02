
@interface PHAssetSceneprintProperties : PHAssetPropertySet {
    NSData * _duplicateMatchingAlternateData;
    NSData * _duplicateMatchingData;
    NSData * _sceneprint;
}

@property (nonatomic, readonly) NSData *duplicateMatchingAlternateData;
@property (nonatomic, readonly) NSString *duplicateMatchingAlternateValue;
@property (nonatomic, readonly) NSData *duplicateMatchingData;
@property (nonatomic, readonly) NSString *duplicateMatchingValue;
@property (nonatomic, readonly) NSData *sceneprint;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)duplicateMatchingAlternateData;
- (id)duplicateMatchingAlternateValue;
- (id)duplicateMatchingData;
- (id)duplicateMatchingValue;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;
- (id)sceneprint;

@end
