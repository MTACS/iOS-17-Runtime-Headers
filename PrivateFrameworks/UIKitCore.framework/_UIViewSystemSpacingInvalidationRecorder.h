
@interface _UIViewSystemSpacingInvalidationRecorder : NSObject <_UIGeometryChangeObserver> {
    UIView * _bottomView;
    NSMapTable * _observingViewTable;
    UIView * _topView;
}

@property (nonatomic, readonly) UIView *bottomView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *observingViews;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *topView;

- (void).cxx_destruct;
- (id)_existingObservingViewTable;
- (void)_geometryChanged:(const struct { int x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; struct CATransform3D { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; double x_6_1_5; double x_6_1_6; double x_6_1_7; double x_6_1_8; double x_6_1_9; double x_6_1_10; double x_6_1_11; double x_6_1_12; double x_6_1_13; double x_6_1_14; double x_6_1_15; double x_6_1_16; } x6; id x7; id x8; id x9; id x10; }*)arg1 forAncestor:(id)arg2;
- (id)_observingViewTable;
- (void)addObservingView:(id)arg1;
- (id)bottomView;
- (void)dealloc;
- (id)description;
- (id)initWithTopView:(id)arg1 bottomView:(id)arg2;
- (id)observingViews;
- (void)removeObservingView:(id)arg1;
- (id)topView;

@end
