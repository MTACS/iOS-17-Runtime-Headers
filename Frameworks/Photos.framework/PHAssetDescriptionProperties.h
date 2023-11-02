
@interface PHAssetDescriptionProperties : PHAssetPropertySet {
    NSString * _accessibilityDescription;
    NSString * _assetDescription;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *accessibilityDescription;
@property (nonatomic, readonly, copy) NSString *assetDescription;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)accessibilityDescription;
- (id)assetDescription;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;
- (id)title;

@end
