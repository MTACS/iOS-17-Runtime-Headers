
@interface _UICursorAccessoryHostView : _UITouchPassthroughView {
    bool  _collapsed;
    _UICursorAccessoryView * _cursorAccessoryView;
    _UIContainerWindowPortalInteraction * _portalInteraction;
    unsigned long long  _preferredPlacementEdge;
    unsigned long long  _resolvedPlacement;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _selectionRect;
}

@property (getter=isCollapsed, nonatomic) bool collapsed;
@property (nonatomic, retain) _UICursorAccessoryView *cursorAccessoryView;
@property (nonatomic, retain) _UIContainerWindowPortalInteraction *portalInteraction;
@property (nonatomic) unsigned long long preferredPlacementEdge;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } selectionRect;

- (void).cxx_destruct;
- (id)cursorAccessoryView;
- (id)initWithCursorItemDataSource:(id)arg1;
- (bool)isCollapsed;
- (void)layoutSubviews;
- (id)portalInteraction;
- (unsigned long long)preferredPlacementEdge;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionRect;
- (void)setCollapsed:(bool)arg1;
- (void)setCursorAccessoryView:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setPortalInteraction:(id)arg1;
- (void)setPreferredPlacementEdge:(unsigned long long)arg1;
- (void)setSelectionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
