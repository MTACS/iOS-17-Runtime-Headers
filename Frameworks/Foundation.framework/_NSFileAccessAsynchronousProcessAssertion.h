
@interface _NSFileAccessAsynchronousProcessAssertion : NSObject {
    BKSProcessAssertion * _assertion;
    NSString * _name;
    int  _pid;
}

@property (readonly) int PID;

- (int)PID;
- (void)beginAssertion;
- (void)dealloc;
- (id)initWithPID:(int)arg1 name:(id)arg2;
- (void)invalidate;

@end
