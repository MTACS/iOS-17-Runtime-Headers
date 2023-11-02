
@interface PGAssetCollectionFeatureDefinition : NSObject <NSSecureCoding> {
    PGCLIPQueryAssetFilter * _CLIPQueryAssetFilter;
    PGAudioAssetFilter * _audioAssetFilter;
    PGCustomFoodieAssetFilter * _customAssetFilter;
    PGPeopleAssetFilter * _peopleAssetFilter;
    PGSceneAssetFilter * _sceneAssetFilter;
    PGSocialGroupAssetFilter * _socialGroupAssetFilter;
}

@property (nonatomic, readonly) PGCLIPQueryAssetFilter *CLIPQueryAssetFilter;
@property (nonatomic, readonly) PGAudioAssetFilter *audioAssetFilter;
@property (nonatomic, readonly) PGCustomFoodieAssetFilter *customAssetFilter;
@property (nonatomic, readonly) PGPeopleAssetFilter *peopleAssetFilter;
@property (nonatomic, readonly) PGSceneAssetFilter *sceneAssetFilter;
@property (nonatomic, readonly) PGSocialGroupAssetFilter *socialGroupAssetFilter;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CLIPQueryAssetFilter;
- (id)audioAssetFilter;
- (id)customAssetFilter;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAssetFilterByName:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)peopleAssetFilter;
- (id)sceneAssetFilter;
- (id)socialGroupAssetFilter;

@end
