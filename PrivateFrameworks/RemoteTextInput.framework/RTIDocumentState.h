
@interface RTIDocumentState : NSObject <NSCopying, NSSecureCoding> {
    NSMutableData * __documentRects;
    RTITextStyling * _autocorrectBubbleStyling;
    RTIColor * _autocorrectTextBackgroundColor;
    RTIColor * _autocorrectTextColor;
    bool  _canSuggestSupplementalItemsForCurrentSelection;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _caretRectInWindow;
    bool  _clearCanSuggestOnNextDocumentState;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _clientFrameInEntitySpace;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _clientFrameInWindow;
    TIDocumentState * _documentState;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _firstSelectionRectInEntitySpace;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _firstSelectionRectInWindow;
    bool  _hasText;
    RTIColor * _insertionPointColor;
    bool  _originatedFromSource;
    RTIDocumentRequest * _request;
    NSAttributedString * _textCheckingAnnotatedString;
}

@property (nonatomic, retain) NSMutableData *_documentRects;
@property (nonatomic, retain) RTITextStyling *autocorrectBubbleStyling;
@property (nonatomic, retain) RTIColor *autocorrectTextBackgroundColor;
@property (nonatomic, retain) RTIColor *autocorrectTextColor;
@property (nonatomic) bool canSuggestSupplementalItemsForCurrentSelection;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } caretRectInWindow;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } clientFrameInEntitySpace;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } clientFrameInWindow;
@property (nonatomic, retain) TIDocumentState *documentState;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } firstSelectionRectInEntitySpace;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } firstSelectionRectInWindow;
@property (nonatomic) bool hasText;
@property (nonatomic, retain) RTIColor *insertionPointColor;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } markedTextRange;
@property (nonatomic) bool originatedFromSource;
@property (nonatomic, readonly) RTIDocumentRequest *request;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } selectedTextRange;
@property (nonatomic, copy) NSAttributedString *textCheckingAnnotatedString;

// Image: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput

+ (id)documentStateWithRequest:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_documentRects;
- (void)_enumerateDocumentRectsWithOptions:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)addTextRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)addTextRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 granularity:(long long)arg3;
- (void)addTextRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 granularity:(long long)arg3 isVertical:(bool)arg4;
- (id)autocorrectBubbleStyling;
- (id)autocorrectTextBackgroundColor;
- (id)autocorrectTextColor;
- (bool)canSuggestSupplementalItemsForCurrentSelection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectInWindow;
- (unsigned long long)characterIndexForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clientFrameInEntitySpace;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clientFrameInWindow;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })deltaForSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct RTIRange { long long x1; long long x2; })deltaRangeForSelection:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)description;
- (id)documentState;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateRectsWithOptions:(unsigned long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 granularity:(long long)arg3 block:(id /* block */)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 actualRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withGranularity:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withGranularity:(long long)arg2 isVerticalOut:(bool*)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withGranularity:(long long)arg2 isVerticalOut:(bool*)arg3 actualRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstSelectionRectInEntitySpace;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstSelectionRectInWindow;
- (bool)hasText;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)insertionPointColor;
- (bool)isEqual:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })markedTextRange;
- (bool)originatedFromSource;
- (id)rectsForCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withGranularity:(long long)arg2;
- (id)request;
- (void)resetTextRects;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedTextRange;
- (void)setAutocorrectBubbleStyling:(id)arg1;
- (void)setAutocorrectTextBackgroundColor:(id)arg1;
- (void)setAutocorrectTextColor:(id)arg1;
- (void)setCanSuggestSupplementalItemsForCurrentSelection:(bool)arg1;
- (void)setCaretRectInWindow:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setClientFrameInEntitySpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setClientFrameInWindow:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDocumentState:(id)arg1;
- (void)setFirstSelectionRectInEntitySpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFirstSelectionRectInWindow:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHasText:(bool)arg1;
- (void)setInsertionPointColor:(id)arg1;
- (void)setOriginatedFromSource:(bool)arg1;
- (void)setSelectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTextCheckingAnnotatedString:(id)arg1;
- (void)set_documentRects:(id)arg1;
- (id)textCheckingAnnotatedString;

// Image: /System/Library/PrivateFrameworks/AutoFillUI.framework/AutoFillUI

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_popoverAnchorRectForPopoverPresentedFromVerticalEdge:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_popoverAnchorRectInClientFrameForPopoverPresentedFromVerticalEdge:(bool)arg1;

@end
