
@interface CCUICAPackageView : UIView <CCUIPunchOutCompensating, CCUIPunchOutRendering, NSCopying> {
    CAPackage * _package;
    UIView * _packageContentView;
    CCUICAPackageDescription * _packageDescription;
    CALayer * _packageLayer;
    double  _scale;
    CAStateController * _stateController;
}

@property (setter=ccui_setCompensationAlpha:, nonatomic) double ccui_compensationAlpha;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CAPackage *package;
@property (nonatomic, retain) CCUICAPackageDescription *packageDescription;
@property (nonatomic) double scale;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setPackage:(id)arg1;
- (double)ccui_compensationAlpha;
- (bool)ccui_configureForPunchOutRendering:(bool)arg1;
- (id)ccui_punchOutCompensatingCopy;
- (void)ccui_setCompensationAlpha:(double)arg1;
- (void)ccui_updatePunchOutCompensationIfNecessary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)package;
- (id)packageDescription;
- (double)scale;
- (void)setPackage:(id)arg1;
- (void)setPackageDescription:(id)arg1;
- (void)setScale:(double)arg1;
- (void)setStateName:(id)arg1;

@end
