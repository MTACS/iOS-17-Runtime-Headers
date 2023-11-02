
@interface NTKPigmentCollectionConfig : NSObject <NSCopying> {
    NSString * _collectionOverride;
    NSString * _defaultColorOptionName;
    NSString * _defaultConfigAttributeName;
    NSArray * _defaultGalleryColorNames;
    NSNumber * _excludesDuotone;
    NSArray * _exclusions;
    NSString * _fallbackDefaultColorOptionName;
    NSString * _featureFlag;
    NSNumber * _isAddable;
    NSDictionary * _migration;
    NSNumber * _sensitivity;
    NSNumber * _sku;
    NSNumber * _sortedByHue;
    NSNumber * _supportsSlider;
}

@property (nonatomic, copy) NSString *collectionOverride;
@property (nonatomic, copy) NSString *defaultColorOptionName;
@property (nonatomic, copy) NSString *defaultConfigAttributeName;
@property (nonatomic, copy) NSArray *defaultGalleryColorNames;
@property (nonatomic, copy) NSNumber *excludesDuotone;
@property (nonatomic, copy) NSArray *exclusions;
@property (nonatomic, copy) NSString *fallbackDefaultColorOptionName;
@property (nonatomic, copy) NSString *featureFlag;
@property (nonatomic, copy) NSNumber *isAddable;
@property (nonatomic, copy) NSDictionary *migration;
@property (nonatomic, copy) NSNumber *sensitivity;
@property (nonatomic, copy) NSNumber *sku;
@property (nonatomic, copy) NSNumber *sortedByHue;
@property (nonatomic, copy) NSNumber *supportsSlider;

+ (id)collectionConfigFromProtoBuffer:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)applyCollectionOverrideNameOnItems:(id)arg1;
- (id)collectionOverride;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultColorOptionName;
- (id)defaultConfigAttributeName;
- (id)defaultGalleryColorNames;
- (id)description;
- (id)excludesDuotone;
- (id)exclusions;
- (id)fallbackDefaultColorOptionName;
- (id)featureFlag;
- (id)isAddable;
- (bool)isEqual:(id)arg1;
- (id)migration;
- (void)overridePropertiesFromConfig:(id)arg1;
- (id)protoBuffer;
- (void)removeExcludedItemsFromList:(id)arg1;
- (id)sensitivity;
- (void)setCollectionOverride:(id)arg1;
- (void)setDefaultColorOptionName:(id)arg1;
- (void)setDefaultConfigAttributeName:(id)arg1;
- (void)setDefaultGalleryColorNames:(id)arg1;
- (void)setExcludesDuotone:(id)arg1;
- (void)setExclusions:(id)arg1;
- (void)setFallbackDefaultColorOptionName:(id)arg1;
- (void)setFeatureFlag:(id)arg1;
- (void)setIsAddable:(id)arg1;
- (void)setMigration:(id)arg1;
- (void)setSensitivity:(id)arg1;
- (void)setSku:(id)arg1;
- (void)setSortedByHue:(id)arg1;
- (void)setSupportsSlider:(id)arg1;
- (id)sku;
- (id)sortedByHue;
- (id)supportsSlider;

@end
