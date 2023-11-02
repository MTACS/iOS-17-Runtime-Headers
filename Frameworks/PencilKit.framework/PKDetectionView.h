
@interface PKDetectionView : UIView <UIContextMenuInteractionDelegate_ForWebKitOnly> {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _drawingTransform;
    UIContextMenuInteraction * _menuInteraction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } drawingBounds;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } drawingTransform;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKDetectionItem *item;
@property (nonatomic, retain) UIContextMenuInteraction *menuInteraction;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_contextMenuInteraction:(id)arg1 overrideSuggestedActionsForConfiguration:(id)arg2;
- (id)_underlineColor;
- (double)_underlineThickness;
- (unsigned long long)accessibilityTraits;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawingBounds;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })drawingTransform;
- (bool)hitTest:(struct CGPoint { double x1; double x2; })arg1;
- (id)init;
- (id)item;
- (id)menuInteraction;
- (void)setDrawingTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setMenuInteraction:(id)arg1;
- (void)tapHandler:(id)arg1;

@end
