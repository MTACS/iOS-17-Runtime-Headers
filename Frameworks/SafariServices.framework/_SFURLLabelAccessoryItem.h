
@interface _SFURLLabelAccessoryItem : NSObject {
    bool  _centerAligned;
    UIVisualEffectView * _effectView;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    double  _spacing;
    UIVisualEffectView * _squishedEffectView;
    UIImageView * _squishedView;
    UIImageView * _view;
}

@property (nonatomic) bool centerAligned;
@property (nonatomic, retain) UIVisualEffectView *effectView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) double spacing;
@property (nonatomic, retain) UIVisualEffectView *squishedEffectView;
@property (nonatomic, retain) UIImageView *squishedView;
@property (nonatomic, retain) UIImageView *view;
@property (nonatomic, readonly) UIView *viewForLayout;

- (void).cxx_destruct;
- (bool)centerAligned;
- (id)effectView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (void)setCenterAligned:(bool)arg1;
- (void)setEffectView:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSpacing:(double)arg1;
- (void)setSquishedEffectView:(id)arg1;
- (void)setSquishedView:(id)arg1;
- (void)setView:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (double)spacing;
- (id)squishedEffectView;
- (id)squishedView;
- (id)view;
- (id)viewForLayout;

@end
