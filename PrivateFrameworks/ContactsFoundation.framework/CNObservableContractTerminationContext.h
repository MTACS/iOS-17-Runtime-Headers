
@interface CNObservableContractTerminationContext : NSObject {
    NSArray * _callStack;
    unsigned long long  _threadId;
}

@property (readonly, copy) NSArray *callStack;
@property (readonly) unsigned long long threadId;

+ (id)currentContext;
+ (unsigned long long)currentThreadId;

- (void).cxx_destruct;
- (id)callStack;
- (id)initWithCallStack:(id)arg1 threadId:(unsigned long long)arg2;
- (unsigned long long)threadId;

@end
