
@interface BYXPCActivity : NSObject {
    NSObject<OS_xpc_object> * _underlyingActivity;
    NSObject<OS_xpc_object> * _xpcActivity;
}

@property (nonatomic, copy) NSObject<OS_xpc_object> *criteria;
@property (nonatomic, retain) NSObject<OS_xpc_object> *underlyingActivity;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcActivity;

+ (id)activityWithXPCActivity:(id)arg1;

- (void).cxx_destruct;
- (id)criteria;
- (bool)setCompletionStatus:(long long)arg1;
- (void)setCriteria:(id)arg1;
- (bool)setState:(long long)arg1;
- (void)setUnderlyingActivity:(id)arg1;
- (void)setXpcActivity:(id)arg1;
- (bool)shouldDefer;
- (long long)state;
- (id)underlyingActivity;
- (id)xpcActivity;

@end
