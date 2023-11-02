
@interface _UIContextMenuLayoutArbiter : NSObject {
    UIView * _containerView;
    _UIContextMenuLayoutArbiterInput * _currentInput;
    unsigned long long  _currentLayout;
    struct { 
        unsigned long long attachment; 
        unsigned long long alignment; 
        double attachmentOffset; 
        double alignmentOffset; 
        long long gravity; 
    }  _menuAnchor;
}

@property (nonatomic) UIView *containerView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentBounds;
@property (nonatomic, retain) _UIContextMenuLayoutArbiterInput *currentInput;
@property (nonatomic) unsigned long long currentLayout;
@property (nonatomic, readonly) struct { unsigned long long x1; unsigned long long x2; double x3; double x4; long long x5; } menuAnchor;

- (void).cxx_destruct;
- (id)_accessoryPositionsForBaseLayout:(id)arg1;
- (unsigned long long)_automaticAlignmentAndOffset:(out double*)arg1 forAttachment:(unsigned long long)arg2 sourcePoint:(struct CGPoint { double x1; double x2; })arg3;
- (struct CGPoint { double x1; double x2; })_computedMenuAnchorPointForMenuFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 previewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_computedMenuBoundsForContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 predictedPreviewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_computedPreviewBoundsForContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)_defaultAttachmentEdge;
- (void)_drawContentBoundsDebugUI:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_positionPlatterFrame:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 andActionViewFrame:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 aboutSourcePoint:(struct CGPoint { double x1; double x2; })arg4;
- (id)computedLayoutWithInput:(id)arg1;
- (id)containerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (double)contentSpacing;
- (id)currentInput;
- (unsigned long long)currentLayout;
- (id)initWithContainerView:(id)arg1 layout:(unsigned long long)arg2;
- (struct { unsigned long long x1; unsigned long long x2; double x3; double x4; long long x5; })menuAnchor;
- (void)setContainerView:(id)arg1;
- (void)setCurrentInput:(id)arg1;
- (void)setCurrentLayout:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceWindowBounds;

@end
