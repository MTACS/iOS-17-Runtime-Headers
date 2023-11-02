
@interface AXMHapticOutputAction : AXMOutputAction {
    NSURL * _hapticFileURL;
    double  _hapticIntensity;
}

@property (nonatomic, readonly) NSURL *hapticFileURL;
@property (nonatomic) double hapticIntensity;

- (void).cxx_destruct;
- (id)_initWithURL:(id)arg1 handle:(id)arg2;
- (id)hapticFileURL;
- (double)hapticIntensity;
- (id)initWithURL:(id)arg1;
- (void)setHapticIntensity:(double)arg1;

@end
