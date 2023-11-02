
@interface ICTK2InlineTextAttachmentViewProvider : ICTK2TextAttachmentViewProvider <ICAttachmentFindable> {
    NSLayoutManager * _displayTextLayoutManager;
    NSTextContainer * _displayTextTextContainer;
    NSTextStorage * _displayTextTextStorage;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _selectedSearchRange;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSLayoutManager *displayTextLayoutManager;
@property (nonatomic, readonly) NSTextContainer *displayTextTextContainer;
@property (nonatomic, readonly) NSTextStorage *displayTextTextStorage;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ICInlineAttachmentView *inlineAttachmentView;
@property (nonatomic, readonly) ICInlineTextAttachment *inlineTextAttachment;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } selectedSearchRange;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)displayTextLayoutManager;
- (id)displayTextTextContainer;
- (id)displayTextTextStorage;
- (void)drawCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inFindableString:(id)arg2 forContentView:(id)arg3;
- (id)inlineAttachmentView;
- (id)inlineTextAttachment;
- (void)loadView;
- (id)rectsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inFindableString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2 inFindableString:(id)arg3;
- (void)scrollToRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inFindableString:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRangeWithinRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inFindableString:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedSearchRange;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inFindableString:(id)arg2;
- (void)setSelectedSearchRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)updateDisplayTextTextStorage;
- (id)viewForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inFindableString:(id)arg2;

@end
