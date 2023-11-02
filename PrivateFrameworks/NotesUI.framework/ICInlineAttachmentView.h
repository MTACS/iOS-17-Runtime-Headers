
@interface ICInlineAttachmentView : UIView <ICAccessibilityRotorSearchElement, ICAttachmentViewInitializing, ICSupplementalView, ICTextPreviewProvider, UIContextMenuInteractionDelegate, UIGestureRecognizerDelegate> {
    UIContextMenuInteraction * _contextInteraction;
    <ICInlineAttachmentViewAnimationDelegate> * _delegate;
    ICSearchResultRegexMatchFinder * _highlightPatternRegexFinder;
    UILabel * _label;
    CADisplayLink * _rippleAnimationTimer;
    ICAttributedStringRippler * _rippler;
    bool  _selected;
    NSDictionary * _surroundingAttributes;
    ICInlineTextAttachment * _textAttachment;
    double  _textContainerWidth;
}

@property (nonatomic, readonly) double baselineOffsetFromBottom;
@property (nonatomic, retain) UIContextMenuInteraction *contextInteraction;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ICInlineAttachmentViewAnimationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ICSearchResultRegexMatchFinder *highlightPatternRegexFinder;
@property (nonatomic, readonly) UIImage *imageForPrinting;
@property (nonatomic, readonly) bool isLinkAttachmentView;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) CADisplayLink *rippleAnimationTimer;
@property (nonatomic, retain) ICAttributedStringRippler *rippler;
@property (getter=isSelected, nonatomic) bool selected;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *supportedRotorTypes;
@property (nonatomic, copy) NSDictionary *surroundingAttributes;
@property (nonatomic) ICInlineTextAttachment *textAttachment;
@property (nonatomic) double textContainerWidth;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } textRangeInNote;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (void).cxx_destruct;
- (id)accessibilityAttributedLabel;
- (unsigned long long)accessibilityTraits;
- (void)animateInsertionIfNecessary;
- (void)attachmentDataChanged:(id)arg1;
- (double)baselineOffsetFromBottom;
- (void)beginRippleAnimation;
- (id)contextInteraction;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)createNewLabel;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (void)endRippleAnimation;
- (id)highlightPatternRegexFinder;
- (id)imageForPrinting;
- (id)imageForTextPreviewInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithTextAttachment:(id)arg1 textContainer:(id)arg2 forManualRendering:(bool)arg3;
- (bool)isAccessibilityElement;
- (bool)isLinkAttachmentView;
- (bool)isSelected;
- (id)label;
- (void)objectDidUpdateShare:(id)arg1;
- (void)respondToTapGesture:(id)arg1;
- (id)rippleAnimationTimer;
- (id)rippler;
- (void)setContextInteraction:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHighlightPatternRegexFinder:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setRippleAnimationTimer:(id)arg1;
- (void)setRippler:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSurroundingAttributes:(id)arg1;
- (void)setTextAttachment:(id)arg1;
- (void)setTextContainerWidth:(double)arg1;
- (void)setupEventHandling;
- (id)surroundingAttributes;
- (id)textAttachment;
- (double)textContainerWidth;
- (void)updateHighlightsWithAttributes:(id)arg1;
- (void)updateLabel;
- (void)updateRippleAnimation;
- (void)updateStyleWithAttributes:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

- (id)supportedRotorTypes;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRangeInNote;
- (id)viewIdentifier;

@end
