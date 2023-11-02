
@interface MTLGPUDebugStackOverflowErrorLog : MTLGPUDebugGPULog {
    NSString * _functionName;
}

@property (nonatomic, retain) NSString *functionName;

- (id)description;
- (id)functionName;
- (void)setFunctionName:(id)arg1;

@end
