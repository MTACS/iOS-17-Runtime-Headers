
@interface CADXPCInvocationContextHolder : NSObject {
    id  _proxy;
    NSMutableArray * _retainedArguments;
}

@property (nonatomic, readonly) id proxy;

- (void).cxx_destruct;
- (void)clear;
- (id)proxy;
- (void)retainProxy:(id)arg1 andArgumentsInInvocation:(id)arg2;

@end
