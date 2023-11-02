
@interface ICInlineTextFindingResult : ICTextFindingResult {
    ICInlineAttachment * _attachment;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _displayTextRange;
    NSAttributedString * _findableString;
}

@property (nonatomic) ICInlineAttachment *attachment;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } displayTextRange;
@property (nonatomic, retain) NSAttributedString *findableString;

- (void).cxx_destruct;
- (id)attachment;
- (long long)compare:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })displayTextRange;
- (id)findableString;
- (id)framesForHighlightInTextView:(id)arg1;
- (id)inlineAttachmentViewControllerInTextView:(id)arg1;
- (id)inlineTextAttachmentViewProviderInTextView:(id)arg1;
- (void)setAttachment:(id)arg1;
- (void)setDisplayTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setFindableString:(id)arg1;

@end
