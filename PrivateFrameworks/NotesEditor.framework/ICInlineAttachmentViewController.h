
@interface ICInlineAttachmentViewController : ICAbstractAttachmentViewController <ICAttachmentFindable, ICAttachmentViewControllerInitializing, ICInlineAttachmentViewAnimationDelegate> {
    ICInlineAttachment * _attachment;
    NSLayoutManager * _displayTextLayoutManager;
    NSTextContainer * _displayTextTextContainer;
    NSTextStorage * _displayTextTextStorage;
    bool  _forManualRendering;
    unsigned long long  _initialCharIndex;
    NSLayoutManager * _layoutManager;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _selectedSearchRange;
    ICInlineTextAttachment * _textAttachment;
}

@property (nonatomic, readonly) ICInlineAttachment *attachment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSLayoutManager *displayTextLayoutManager;
@property (nonatomic, readonly) NSTextContainer *displayTextTextContainer;
@property (nonatomic, readonly) NSTextStorage *displayTextTextStorage;
@property (nonatomic) bool forManualRendering;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long initialCharIndex;
@property (nonatomic) NSLayoutManager *layoutManager;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } selectedSearchRange;
@property (readonly) Class superclass;
@property (nonatomic) ICInlineTextAttachment *textAttachment;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)attachment;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })attachmentRange;
- (id)displayTextLayoutManager;
- (id)displayTextTextContainer;
- (id)displayTextTextStorage;
- (void)drawCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inFindableString:(id)arg2 forContentView:(id)arg3;
- (bool)forManualRendering;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithTextAttachment:(id)arg1 forManualRendering:(bool)arg2 layoutManager:(id)arg3;
- (id)initWithTextAttachment:(id)arg1 forManualRendering:(bool)arg2 layoutManager:(id)arg3 initialCharacterIndex:(unsigned long long)arg4;
- (unsigned long long)initialCharIndex;
- (id)inlineAttachmentView;
- (id)layoutManager;
- (void)layoutWithStyleAttributesOfCharacterIndex:(unsigned long long)arg1;
- (void)loadView;
- (id)rectsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inFindableString:(id)arg2;
- (void)redrawInlineAttachmentView:(id)arg1;
- (void)relayoutInlineAttachmentView:(id)arg1;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2 inFindableString:(id)arg3;
- (void)scrollToRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inFindableString:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRangeWithinRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inFindableString:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedSearchRange;
- (void)setForManualRendering:(bool)arg1;
- (void)setHighlightPatternRegexFinder:(id)arg1;
- (void)setInitialCharIndex:(unsigned long long)arg1;
- (void)setLayoutManager:(id)arg1;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inFindableString:(id)arg2;
- (void)setSelectedSearchRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTextAttachment:(id)arg1;
- (id)textAttachment;
- (void)updateDisplayTextTextStorage;
- (id)viewForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inFindableString:(id)arg2;

@end
