
@interface AMSRBSKeepAlive : NSObject {
    void keepAlive;
    void name;
    void style;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long style;

+ (id)keepAliveWithName:(id)arg1;
+ (id)keepAliveWithName:(id)arg1 style:(long long)arg2;
+ (void)keepAliveWithName:(id)arg1 style:(long long)arg2 block:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (id)name;
- (long long)style;

@end
