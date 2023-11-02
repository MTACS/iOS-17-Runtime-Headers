
@interface SBTransientActiveInterfaceOrientationRequester : NSObject {
    long long  _orientation;
    NSString * _reason;
}

@property (nonatomic, readonly) long long orientation;
@property (nonatomic, readonly, copy) NSString *reason;

- (void).cxx_destruct;
- (id)initWithOrientation:(long long)arg1 andReason:(id)arg2;
- (long long)orientation;
- (id)reason;

@end
