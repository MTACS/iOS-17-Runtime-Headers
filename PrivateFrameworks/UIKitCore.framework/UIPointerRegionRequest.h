
@interface UIPointerRegionRequest : NSObject {
    long long  __pointerType;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    long long  _modifiers;
}

@property (nonatomic) long long _pointerType;
@property (nonatomic) struct CGPoint { double x1; double x2; } location;
@property (nonatomic) long long modifiers;

- (bool)_isPencilInitiated;
- (long long)_pointerType;
- (id)description;
- (struct CGPoint { double x1; double x2; })location;
- (long long)modifiers;
- (void)setLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setModifiers:(long long)arg1;
- (void)set_pointerType:(long long)arg1;

@end
