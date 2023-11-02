
@interface _NTKKeylinePathView : CLKUIColoringView <NTKKeylineView> {
    UIBezierPath * _path;
    UIBezierPath * _secondPath;
    NTKKeylineTouchable * touchable;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, readonly) UIColor *contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *overrideColor;
@property (readonly) Class superclass;
@property (nonatomic, retain) NTKKeylineTouchable *touchable;
@property (nonatomic) bool usesLegibility;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithPath:(id)arg1 secondPath:(id)arg2 scale:(double)arg3;
- (void)setTouchable:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)touchable;

@end
