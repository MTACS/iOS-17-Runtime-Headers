
@interface NSTextContainer : NSObject <NSSecureCoding, NSTextLayoutOrientationProvider> {
    long long  _applicationFrameworkContext;
    NSDictionary * _attributesForExtraLineFragment;
    double  _cacheBoundsMaxY;
    double  _cacheBoundsMinY;
    struct CGPath { } * _cachedBoundingPath;
    struct __CFArray { } * _cachedBounds;
    struct __CFArray { } * _cachedClippingAttributes;
    NSArray * _exclusionPaths;
    NSLayoutManager * _layoutManager;
    long long  _layoutOrientation;
    double  _lineFragmentPadding;
    unsigned long long  _maximumLines;
    double  _minimumWidth;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    struct __tcFlags { 
        unsigned int widthTracksTextView : 1; 
        unsigned int heightTracksTextView : 1; 
        unsigned int observingFrameChanges : 1; 
        unsigned int lineBreakMode : 4; 
        unsigned int oldAPI : 1; 
        unsigned int _reserved : 8; 
    }  _tcFlags;
    NSTextLayoutManager * _textLayoutManager;
    UIView<NSTextContainerView> * _textView;
    bool  _textViewHasDefaultParagraphStyle;
    bool  _textViewHasLinkTextAttributes;
    bool  _textViewSupportsAdaptiveColor;
    bool  _textViewSupportsDowngrade;
    NSTextViewportLayoutController * _textViewportLayoutController;
}

@property (nonatomic, copy) NSArray *exclusionPaths;
@property (nonatomic) bool heightTracksTextView;
@property (nonatomic) NSLayoutManager *layoutManager;
@property (nonatomic, readonly) long long layoutOrientation;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) double lineFragmentPadding;
@property (nonatomic) unsigned long long maximumNumberOfLines;
@property (getter=isSimpleRectangularTextContainer, nonatomic, readonly) bool simpleRectangularTextContainer;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) NSTextLayoutManager *textLayoutManager;
@property (nonatomic, readonly) UITextView *tk2TextView;
@property (nonatomic) bool widthTracksTextView;

// Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void)_commonInit;
- (bool)_containerObservesTextViewFrameChanges;
- (void)_containerTextViewFrameChanged:(id)arg1;
- (bool)_hasLayoutManager:(id)arg1;
- (void)_resizeAccordingToTextView:(id)arg1;
- (bool)_textViewAllowsMigratingToLayoutManager;
- (id)attributesForExtraLineFragment;
- (struct CGSize { double x1; double x2; })containerSize;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)coordinateAccess:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)defaultParagraphStyle;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)exclusionPaths;
- (bool)heightTracksTextView;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)invalidateTextContainerOrigin;
- (bool)isSimpleRectangularTextContainer;
- (id)layoutManager;
- (long long)layoutOrientation;
- (long long)lineBreakMode;
- (double)lineFragmentPadding;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lineFragmentRectForProposedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 atIndex:(unsigned long long)arg2 writingDirection:(long long)arg3 remainingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lineFragmentRectForProposedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 remainingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (id)linkTextAttributes;
- (id)markedTextAttributesAtCharacterIndex:(long long)arg1 effectiveRange:(out struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (unsigned long long)maximumNumberOfLines;
- (double)minimumLineFragmentWidth;
- (id)renderingColorForDocumentColor:(id)arg1;
- (void)replaceLayoutManager:(id)arg1;
- (id)selectedTextAttributes;
- (void)setAttributesForExtraLineFragment:(id)arg1;
- (void)setContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setExclusionPaths:(id)arg1;
- (void)setHeightTracksTextView:(bool)arg1;
- (void)setLayoutManager:(id)arg1;
- (void)setLayoutOrientation:(long long)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setLineFragmentPadding:(double)arg1;
- (void)setMaximumNumberOfLines:(unsigned long long)arg1;
- (void)setMinimumLineFragmentWidth:(double)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTextLayoutManager:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setWidthTracksTextView:(bool)arg1;
- (struct CGSize { double x1; double x2; })size;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })textContainerInsetsForView:(id)arg1;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })textContainerInsetsForView_iOS:(id)arg1;
- (struct CGPoint { double x1; double x2; })textContainerOrigin;
- (id)textLayoutManager;
- (id)textView;
- (id)textViewportLayoutController;
- (bool)widthTracksTextView;

// Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit

- (struct CGSize { double x1; double x2; })akContainerSize;
- (void)akSetContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithContainerSize:(struct CGSize { double x1; double x2; })arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2 isSingleLine:(bool*)arg3;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

- (id)tk2TextView;

@end
