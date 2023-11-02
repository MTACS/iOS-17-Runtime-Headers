
@interface MTLGPUDebugTextureErrorLog : MTLGPUDebugGPULog {
    int  _errorReason;
}

@property (nonatomic) int errorReason;

- (id)description;
- (int)errorReason;
- (void)setErrorReason:(int)arg1;

@end
