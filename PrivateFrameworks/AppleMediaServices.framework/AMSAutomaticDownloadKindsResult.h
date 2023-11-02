
@interface AMSAutomaticDownloadKindsResult : NSObject {
    ACAccount * _account;
    NSArray * _enabledMediaKinds;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) NSArray *enabledMediaKinds;

- (void).cxx_destruct;
- (id)account;
- (id)enabledMediaKinds;
- (id)initWithAccount:(id)arg1 andEnabledMediaKinds:(id)arg2;

@end
