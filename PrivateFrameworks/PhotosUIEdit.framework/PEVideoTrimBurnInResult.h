
@interface PEVideoTrimBurnInResult : NSObject {
    PHAsset * _asset;
    PICompositionController * _compositionController;
    PHContentEditingInput * _contentEditingInput;
}

@property (nonatomic, retain) PHAsset *asset;
@property (nonatomic, retain) PICompositionController *compositionController;
@property (nonatomic, retain) PHContentEditingInput *contentEditingInput;

- (void).cxx_destruct;
- (id)asset;
- (id)compositionController;
- (id)contentEditingInput;
- (void)setAsset:(id)arg1;
- (void)setCompositionController:(id)arg1;
- (void)setContentEditingInput:(id)arg1;

@end
