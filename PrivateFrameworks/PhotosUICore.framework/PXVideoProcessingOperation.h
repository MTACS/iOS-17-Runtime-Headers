
@interface PXVideoProcessingOperation : NSOperation {
    id /* block */  _progressHandler;
    <PXVideoProcessingOperationResult> * _result;
    PXVideoProcessingOperationSpec * _spec;
}

@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic, readonly) <PXVideoProcessingOperationResult> *result;
@property (nonatomic, readonly) PXVideoProcessingOperationSpec *spec;

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSpec:(id)arg1;
- (void)main;
- (id)performProcessing;
- (id /* block */)progressHandler;
- (id)result;
- (void)setProgressHandler:(id /* block */)arg1;
- (id)spec;

@end
