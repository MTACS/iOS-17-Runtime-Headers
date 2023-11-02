
@interface PFLModelHandler : NSObject {
    MLUpdateContext * _context;
    MLModel * _model;
    NSURL * _modelURL;
}

@property (nonatomic, retain) MLUpdateContext *context;
@property (nonatomic, readonly) MLModel *model;
@property (nonatomic, readonly) NSURL *modelURL;

- (void).cxx_destruct;
- (id)context;
- (void)evaluateWithDataProvider:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithModelURL:(id)arg1 error:(id*)arg2;
- (id)model;
- (id)modelURL;
- (void)setContext:(id)arg1;
- (void)updateOrderedLayerNames:(id)arg1 withDataProvider:(id)arg2 withPatchModelShapes:(id)arg3 withPatchModelData:(id)arg4 withModelConfiguration:(id)arg5 completion:(id /* block */)arg6;

@end
