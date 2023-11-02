
@interface IHKHarmonizationRequest : NSObject {
    struct CGImage { } * _bg;
    struct CGImage { } * _fg;
    bool  _forceHarmonization;
    float  _harmonizationStrength;
}

@property (readonly) struct CGImage { }*bg;
@property (readonly) struct CGImage { }*fg;
@property (readonly) bool forceHarmonization;
@property (readonly) float harmonizationStrength;

- (struct CGImage { }*)bg;
- (void)dealloc;
- (struct CGImage { }*)fg;
- (bool)forceHarmonization;
- (float)harmonizationStrength;
- (id)initWithForeground:(struct CGImage { }*)arg1 background:(struct CGImage { }*)arg2;
- (id)initWithForeground:(struct CGImage { }*)arg1 background:(struct CGImage { }*)arg2 forceHarmonization:(bool)arg3;
- (id)initWithForeground:(struct CGImage { }*)arg1 background:(struct CGImage { }*)arg2 forceHarmonization:(bool)arg3 harmonizationStrength:(float)arg4;

@end
