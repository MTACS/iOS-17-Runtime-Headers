
@interface CPSHairlineView : UIView {
    long long  _axis;
    NSLayoutConstraint * _strokeThicknessConstraint;
}

@property (nonatomic) long long axis;
@property (nonatomic, retain) NSLayoutConstraint *strokeThicknessConstraint;

+ (id)grayHairlineViewAlongAxis:(long long)arg1;

- (void).cxx_destruct;
- (void)_updateStrokeThickness;
- (long long)axis;
- (id)initWithAxis:(long long)arg1 color:(id)arg2;
- (void)setAxis:(long long)arg1;
- (void)setStrokeThicknessConstraint:(id)arg1;
- (id)strokeThicknessConstraint;
- (void)traitCollectionDidChange:(id)arg1;

@end
