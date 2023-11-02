
@interface _UIFocusEffectManager : NSObject <_UIGeometryChangeObserver> {
    <UIFocusItem> * _focusedItem;
    _UIFocusHaloView * _haloView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <UIFocusItem> *focusedItem;
@property (nonatomic, readonly) _UIFocusHaloView *haloView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_geometryChanged:(const struct { int x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; struct CATransform3D { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; double x_6_1_5; double x_6_1_6; double x_6_1_7; double x_6_1_8; double x_6_1_9; double x_6_1_10; double x_6_1_11; double x_6_1_12; double x_6_1_13; double x_6_1_14; double x_6_1_15; double x_6_1_16; } x6; id x7; id x8; id x9; id x10; }*)arg1 forAncestor:(id)arg2;
- (void)_observeFocusedItemGeometryForItem:(id)arg1;
- (id)focusedItem;
- (id)haloView;
- (void)moveFocusToItem:(id)arg1;
- (void)setFocusedItem:(id)arg1;

@end
