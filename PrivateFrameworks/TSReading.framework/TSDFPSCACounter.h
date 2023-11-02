
@interface TSDFPSCACounter : TSDFPSCounter {
    unsigned int  mCAFrameCount;
    NSTimer * mTimer;
}

- (void)p_updateFrameCount;
- (void)reset;
- (void)startLoggingFPS;
- (void)stopLoggingFPS;

@end
