
@interface VUIActionARQLPreview : VUIAction {
    NSString * _previewURLString;
    NSString * _shareURLString;
}

@property (nonatomic, retain) NSString *previewURLString;
@property (nonatomic, retain) NSString *shareURLString;

- (void).cxx_destruct;
- (id)initWithContextData:(id)arg1;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)previewURLString;
- (void)setPreviewURLString:(id)arg1;
- (void)setShareURLString:(id)arg1;
- (id)shareURLString;

@end
