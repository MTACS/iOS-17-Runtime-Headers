
@interface QLPreviewExtensionRenderer : NSObject {
    id  _preview;
}

@property (retain) id preview;

- (void).cxx_destruct;
- (id)_failedToDrawError;
- (void)drawInContextOfSize:(struct CGSize { double x1; double x2; })arg1 drawingBlock:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)drawInPDFContextOfSize:(struct CGSize { double x1; double x2; })arg1 drawingBlock:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithPreview:(id)arg1;
- (id)preview;
- (void)setPreview:(id)arg1;

@end
