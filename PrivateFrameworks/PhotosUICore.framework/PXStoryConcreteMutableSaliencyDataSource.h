
@interface PXStoryConcreteMutableSaliencyDataSource : NSObject <NSCopying, PXStorySaliencyDataSource> {
    NSMutableDictionary * _rawSaliencyAreasByUUID;
    NSMutableDictionary * _saliencyAreasByUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)rawSaliencyAreasForDisplayAsset:(id)arg1;
- (id)saliencyAreasForDisplayAsset:(id)arg1;
- (void)setSaliencyAreas:(id)arg1 rawSaliencyAreas:(id)arg2 forDisplayAsset:(id)arg3;

@end
