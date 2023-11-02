
@interface ICPencilKitAttachmentResizeHandleAccessibilityElement : UIAccessibilityElement {
    ICPencilKitAttachmentAccessibilityElement * _attachmentElement;
    UIView * _drawingResizeView;
}

@property (nonatomic) ICPencilKitAttachmentAccessibilityElement *attachmentElement;
@property (nonatomic) UIView *drawingResizeView;
@property (nonatomic, readonly) bool isEnabled;
@property (nonatomic, readonly) bool top;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (id)accessibilityContainer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)attachmentElement;
- (id)drawingResizeView;
- (id)initWithAttachmentAccessibilityElement:(id)arg1 drawingResizeView:(id)arg2;
- (bool)isAccessibilityElement;
- (bool)isEnabled;
- (void)setAttachmentElement:(id)arg1;
- (void)setDrawingResizeView:(id)arg1;
- (bool)top;

@end
