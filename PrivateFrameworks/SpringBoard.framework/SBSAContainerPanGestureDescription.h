
@interface SBSAContainerPanGestureDescription : SBSAGestureDescription {
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialLocation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _translation;
}

@property (setter=_setInitialLocation:, nonatomic) struct CGPoint { double x1; double x2; } initialLocation;
@property (setter=_setTranslation:, nonatomic) struct CGPoint { double x1; double x2; } translation;

+ (Class)mutatorClass;

- (void)_setInitialLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (struct CGPoint { double x1; double x2; })initialLocation;
- (bool)isEqual:(id)arg1;
- (struct CGPoint { double x1; double x2; })translation;

@end
