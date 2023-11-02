
@interface _PXStoryConcreteSaliencyDataSource : NSObject <PXStorySaliencyDataSource> {
    NSDictionary * _rawSaliencyAreasByUUID;
    NSDictionary * _saliencyAreasByUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSaliencyAreasByUUID:(id)arg1 rawSaliencyAreasByUUID:(id)arg2;
- (id)rawSaliencyAreasForDisplayAsset:(id)arg1;
- (id)saliencyAreasForDisplayAsset:(id)arg1;

@end
