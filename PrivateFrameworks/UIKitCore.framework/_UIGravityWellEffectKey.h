
@interface _UIGravityWellEffectKey : NSObject <_UIContentEffectKey> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _point;
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } point;
@property (readonly) Class superclass;
@property (nonatomic) UIView *view;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (struct CGPoint { double x1; double x2; })point;
- (void)setPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setView:(id)arg1;
- (id)view;

@end
