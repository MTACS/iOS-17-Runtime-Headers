
@interface PUEditableMediaProviderAdjustmentDataNode : PXRunNode {
    PHAdjustmentData * _adjustmentData;
    <PUEditableAsset> * _asset;
    PUEditableMediaProvider * _mediaProvider;
    int  _requestID;
}

@property (nonatomic, readonly) PHAdjustmentData *adjustmentData;
@property (nonatomic, readonly) <PUEditableAsset> *asset;
@property (nonatomic, readonly) PUEditableMediaProvider *mediaProvider;

- (void).cxx_destruct;
- (void)_handleDidLoadAdjustmentData:(id)arg1 error:(id)arg2;
- (id)adjustmentData;
- (id)asset;
- (void)didCancel;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2;
- (id)mediaProvider;
- (void)run;

@end
