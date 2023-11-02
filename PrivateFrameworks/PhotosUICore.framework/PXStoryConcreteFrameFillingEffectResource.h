
@interface PXStoryConcreteFrameFillingEffectResource : PXStoryConcreteResource <PXStoryFrameFillingEffectResource> {
    <PXDisplayAsset> * _displayAsset;
    bool  _useSmartColor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXDisplayAsset> *px_storyResourceDisplayAsset;
@property (nonatomic, readonly) NSString *px_storyResourceIdentifier;
@property (nonatomic, readonly) long long px_storyResourceKind;
@property (nonatomic, readonly) bool px_storyResourceUseSmartColor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDisplayAsset:(id)arg1 useSmartColor:(bool)arg2;
- (id)initWithIdentifier:(id)arg1 kind:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)px_storyResourceDisplayAsset;
- (bool)px_storyResourceUseSmartColor;

@end
