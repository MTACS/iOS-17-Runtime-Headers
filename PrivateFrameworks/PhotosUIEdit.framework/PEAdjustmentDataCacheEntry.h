
@interface PEAdjustmentDataCacheEntry : NSObject {
    PICompositionController * _compositionController;
    long long  _disposition;
    NSString * _editorBundleID;
    NSObject<OS_dispatch_group> * _group;
    struct CGSize { 
        double width; 
        double height; 
    }  _inputSize;
}

@property (retain) PICompositionController *compositionController;
@property long long disposition;
@property (retain) NSString *editorBundleID;
@property (retain) NSObject<OS_dispatch_group> *group;
@property struct CGSize { double x1; double x2; } inputSize;

+ (id)_resultHandlingQueue;

- (void).cxx_destruct;
- (void)_load:(id)arg1 networkAccessAllowed:(bool)arg2 originalAdjustmentData:(bool)arg3;
- (id)compositionController;
- (void)deliverOn:(id)arg1 completion:(id /* block */)arg2;
- (long long)disposition;
- (id)editorBundleID;
- (id)group;
- (id)initWithAsset:(id)arg1 networkAccessAllowed:(bool)arg2 originalAdjustmentData:(bool)arg3;
- (struct CGSize { double x1; double x2; })inputSize;
- (void)setCompositionController:(id)arg1;
- (void)setDisposition:(long long)arg1;
- (void)setEditorBundleID:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setInputSize:(struct CGSize { double x1; double x2; })arg1;

@end
