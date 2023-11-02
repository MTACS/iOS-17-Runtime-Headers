
@interface ICSystemPaperDocumentHelper : NSObject {
    void attachment;
    void document;
    void textView;
}

@property (nonatomic, readonly) ICAttachment *attachment;
@property (nonatomic) UITextView *textView;

+ (id)drawingForPaperAttachment:(id)arg1;

- (void).cxx_destruct;
- (void)addWithItemProviders:(id)arg1 itemsAnchor:(long long)arg2;
- (void)addWithItemProviders:(id)arg1 itemsLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)attachment;
- (id)init;
- (id)initWithPaperAttachment:(id)arg1 textView:(id)arg2;
- (void)setTextView:(id)arg1;
- (id)textView;

@end
