
@interface PXStoryDuplicateDisplayAsset : NSObject <PXStoryAssetAlternateIdentifiable> {
    NSString * _alternateUUID;
    <PXDisplayAsset> * _displayAsset;
}

@property (nonatomic, readonly) NSString *alternateUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <PXDisplayAsset> *displayAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)alternateUUID;
- (bool)conformsToProtocol:(id)arg1;
- (id)description;
- (id)displayAsset;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)initWithDisplayAsset:(id)arg1 alternateUUID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isKindOfClass:(Class)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)px_storyResourceDisplayAsset;
- (bool)respondsToSelector:(SEL)arg1;

@end
