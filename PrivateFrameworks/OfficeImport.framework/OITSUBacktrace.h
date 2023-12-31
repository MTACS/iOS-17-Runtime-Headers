
@interface OITSUBacktrace : NSObject {
    void ** _callstack;
    int  _frames;
    int  _initAdjustment;
}

+ (id)backtrace;
+ (id)callee;
+ (id)caller;
+ (id)new;

- (id)backtraceString;
- (id)callee;
- (id)caller;
- (id)callerAtIndex:(long long)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAdjustment:(int)arg1;
- (bool)isEqual:(id)arg1;

@end
