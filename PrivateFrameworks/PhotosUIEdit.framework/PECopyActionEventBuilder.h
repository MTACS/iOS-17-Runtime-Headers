
@interface PECopyActionEventBuilder : NSObject {
    <PEAsset> * _asset;
    PICompositionController * _copiedCompositionController;
}

@property (nonatomic, retain) <PEAsset> *asset;
@property (nonatomic, copy) PICompositionController *copiedCompositionController;

- (void).cxx_destruct;
- (id)asset;
- (id)buildEvent;
- (id)copiedCompositionController;
- (void)setAsset:(id)arg1;
- (void)setCopiedCompositionController:(id)arg1;

@end
