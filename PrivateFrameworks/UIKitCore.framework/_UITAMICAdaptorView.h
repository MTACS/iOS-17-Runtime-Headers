
@interface _UITAMICAdaptorView : UIView <_UIGeometryChangeObserver> {
    <_UITAMICAdaptorViewDelegate> * _delegate;
    NSLayoutConstraint * _height;
    bool  _inLayout;
    struct CGSize { 
        double width; 
        double height; 
    }  _layoutSize;
    float  _sizingPriority;
    UIView * _view;
    NSLayoutConstraint * _width;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UITAMICAdaptorViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) float sizingPriority;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

+ (bool)shouldWrapView:(id)arg1;

- (void).cxx_destruct;
- (void)_geometryChanged:(const struct { int x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; struct CATransform3D { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; double x_6_1_5; double x_6_1_6; double x_6_1_7; double x_6_1_8; double x_6_1_9; double x_6_1_10; double x_6_1_11; double x_6_1_12; double x_6_1_13; double x_6_1_14; double x_6_1_15; double x_6_1_16; } x6; id x7; id x8; id x9; id x10; }*)arg1 forAncestor:(id)arg2;
- (void)_updateTraitsAndLayoutSizeIfNecessary;
- (id)delegate;
- (void)didMoveToWindow;
- (id)initWithView:(id)arg1;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setSizingPriority:(float)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (float)sizingPriority;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)updateForAvailableSize;
- (id)view;

@end
