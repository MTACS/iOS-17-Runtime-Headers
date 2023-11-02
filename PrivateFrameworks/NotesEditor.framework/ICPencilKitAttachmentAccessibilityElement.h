
@interface ICPencilKitAttachmentAccessibilityElement : UIAccessibilityElement <ICAccessibilityRotorSearchElement> {
    NSArray * _cachedResizeHandleElements;
    ICInlineCanvasTextAttachment * _textAttachment;
    ICBaseTextView * _textView;
}

@property (nonatomic, readonly) UIView *attachmentDrawingView;
@property (nonatomic, retain) NSArray *cachedResizeHandleElements;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *resizeHandleElements;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *supportedRotorTypes;
@property (nonatomic) ICInlineCanvasTextAttachment *textAttachment;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } textRangeInNote;
@property (nonatomic) ICBaseTextView *textView;

- (void).cxx_destruct;
- (id)_accessibilityParentForFindingScrollParent;
- (bool)accessibilityActivate;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (id)accessibilityContainer;
- (id)accessibilityCustomActions;
- (id)accessibilityCustomRotors;
- (id)accessibilityDragSourceDescriptors;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (id)attachmentDrawingView;
- (id)cachedResizeHandleElements;
- (id)initWithTextAttachment:(id)arg1 textView:(id)arg2;
- (bool)isAccessibilityElement;
- (bool)isSelected;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeInTextStorage;
- (id)resizeHandleElements;
- (bool)selectTextRangeAction;
- (void)setCachedResizeHandleElements:(id)arg1;
- (void)setTextAttachment:(id)arg1;
- (void)setTextView:(id)arg1;
- (bool)showingResizeHandles;
- (id)supportedRotorTypes;
- (id)textAttachment;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRangeInNote;
- (id)textView;

@end
