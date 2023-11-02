
@interface SXVideoComponent : SXComponent <SXComponentAdvertisingMetadataProviding>

@property (nonatomic, readonly) NSString *accessibilityCaption;
@property (nonatomic, readonly) SXJSONDictionary *advertising;
@property (nonatomic, readonly) bool allowsPrerollAds;
@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) NSString *caption;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *prerollPlacementIdentifier;
@property (nonatomic, readonly) NSString *resourceIdentifier;
@property (nonatomic, readonly) NSString *stillImageIdentifier;
@property (readonly) Class superclass;

+ (id)typeString;

- (bool)allowsPrerollAdsWithValue:(id)arg1 withType:(int)arg2;
- (double)aspectRatioWithValue:(id)arg1 withType:(int)arg2;
- (id)initWithJSONObject:(id)arg1 andVersion:(id)arg2;
- (unsigned long long)traits;

@end
