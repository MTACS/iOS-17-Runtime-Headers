
@interface VMUCallTreeRootWithBacktrace : VMUCallTreeRoot {
    NSString * _backtraceString;
}

@property (nonatomic, copy) NSString *backtraceString;

- (void).cxx_destruct;
- (id)backtraceString;
- (void)setBacktraceString:(id)arg1;

@end
