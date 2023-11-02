
@interface MAFlashingLightsProcessor : NSObject {
    PSEVideoProcessor * pse;
}

@property (nonatomic, retain) PSEVideoProcessor *pse;

- (void).cxx_destruct;
- (bool)canProcessSurface:(struct __IOSurface { }*)arg1;
- (id)init;
- (id)processSurface:(struct __IOSurface { }*)arg1 outSurface:(struct __IOSurface { }*)arg2 timestamp:(double)arg3 options:(id)arg4;
- (id)pse;
- (void)setPse:(id)arg1;

@end
