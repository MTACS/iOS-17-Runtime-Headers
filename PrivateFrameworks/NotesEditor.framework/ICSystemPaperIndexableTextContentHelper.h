
@interface ICSystemPaperIndexableTextContentHelper : NSObject {
    void attachment;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  drawing;
    void paperDocument;
}

@property (nonatomic, copy) PKDrawing *drawing;

- (void).cxx_destruct;
- (id)drawing;
- (id)init;
- (id)initWithPaperAttachment:(id)arg1;
- (id)searchWithQuery:(id)arg1;
- (void)setDrawing:(id)arg1;

@end
