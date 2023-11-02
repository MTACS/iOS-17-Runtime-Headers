
@interface MPStoreLibraryPersonalizationContentDescriptor : NSObject {
    MPModelObject * _model;
    long long  _personalizationStyle;
}

@property (nonatomic, readonly) MPModelObject *model;
@property (nonatomic, readonly) long long personalizationStyle;

+ (id)_lightweightPersonalizationPropertiesForLyrics;
+ (id)_lightweightPersonalizationPropertiesForPlaybackPosition;
+ (id)_lightweightPersonalizationPropertiesForStoreAsset;
+ (id)lightweightPersonalizationPropertiesForModelClass:(Class)arg1;
+ (id)requiredLightweightPersonalizationPropertiesForModelClass:(Class)arg1 requestedProperties:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)initWithModel:(id)arg1 personalizationStyle:(long long)arg2;
- (id)model;
- (long long)personalizationStyle;

@end
