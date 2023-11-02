
@interface AMSBiometricsDisableTask : AMSTask {
    ACAccount * _account;
}

@property (nonatomic, readonly) ACAccount *account;

- (void).cxx_destruct;
- (id)account;
- (id)initWithAccount:(id)arg1;
- (id)perform;

@end
