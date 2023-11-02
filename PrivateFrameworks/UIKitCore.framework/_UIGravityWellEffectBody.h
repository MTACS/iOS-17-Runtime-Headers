
@interface _UIGravityWellEffectBody : NSObject {
    UIView * _anchorView;
    double  _distanceFromPrimaryBody;
    _UIMorphingPlatterView * _effectView;
    struct CAPoint3D { 
        double x; 
        double y; 
        double z; 
    }  _positionInPrimaryContainer;
    UITargetedPreview * _preview;
}

@property (nonatomic, retain) UIView *anchorView;
@property (nonatomic) double distanceFromPrimaryBody;
@property (nonatomic, retain) _UIMorphingPlatterView *effectView;
@property (nonatomic) struct CAPoint3D { double x1; double x2; double x3; } positionInPrimaryContainer;
@property (nonatomic, retain) UITargetedPreview *preview;

- (void).cxx_destruct;
- (id)anchorView;
- (id)description;
- (double)distanceFromPrimaryBody;
- (id)effectView;
- (struct CAPoint3D { double x1; double x2; double x3; })positionInPrimaryContainer;
- (id)preview;
- (void)setAnchorView:(id)arg1;
- (void)setDistanceFromPrimaryBody:(double)arg1;
- (void)setEffectView:(id)arg1;
- (void)setPositionInPrimaryContainer:(struct CAPoint3D { double x1; double x2; double x3; })arg1;
- (void)setPreview:(id)arg1;

@end
