
@interface MTLGPUDebugTrapErrorLog : MTLGPUDebugGPULog {
    NSString * _functionName;
}

@property (nonatomic, retain) NSString *functionName;

- (void)dealloc;
- (id)description;
- (id)functionName;
- (void)setFunctionName:(id)arg1;

@end
