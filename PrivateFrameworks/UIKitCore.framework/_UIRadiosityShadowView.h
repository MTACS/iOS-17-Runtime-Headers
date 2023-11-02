
@interface _UIRadiosityShadowView : UIView {
    bool  _needsPunchout;
    CALayer * _punchoutLayer;
    UIBezierPath * _shadowPath;
}

@property (nonatomic) bool needsPunchout;
@property (nonatomic, retain) CALayer *punchoutLayer;
@property (nonatomic, retain) UIBezierPath *shadowPath;

- (void).cxx_destruct;
- (id)initWithSourceView:(id)arg1 shadowPath:(id)arg2 isSoft:(bool)arg3;
- (bool)needsPunchout;
- (id)punchoutLayer;
- (void)setNeedsPunchout:(bool)arg1;
- (void)setPunchoutLayer:(id)arg1;
- (void)setShadowPath:(id)arg1;
- (id)shadowPath;

@end
