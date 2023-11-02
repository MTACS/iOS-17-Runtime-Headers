
@interface NCCAPackageView : UIView {
    CAPackage * _package;
    UIView * _packageContentView;
    CALayer * _packageLayer;
    double  _scale;
    CAStateController * _stateController;
}

@property (nonatomic) double scale;

- (void).cxx_destruct;
- (void)_setupPackageNamed:(id)arg1 inBundle:(id)arg2;
- (id)initWithPackageNamed:(id)arg1 inBundle:(id)arg2;
- (void)layoutSubviews;
- (void)removeAllStateChanges;
- (double)scale;
- (void)setScale:(double)arg1;
- (void)setStateName:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
