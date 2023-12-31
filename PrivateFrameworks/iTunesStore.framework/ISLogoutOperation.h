
@interface ISLogoutOperation : ISOperation {
    SSAccount * _account;
    NSString * _logKey;
}

@property (nonatomic, retain) SSAccount *account;
@property (nonatomic, retain) NSString *logKey;

- (void).cxx_destruct;
- (id)_copyAuthenticationContext;
- (id)_createDisableBookkeeperRequestPropertiesWithURL:(id)arg1;
- (id)_createLogoutRequestProperties;
- (void)_disableAutomaticDownloadKinds;
- (void)_disableBookkeeper;
- (id)_sbsyncData;
- (void)_sendLogoutRequest;
- (id)account;
- (id)initWithAccount:(id)arg1 logKey:(id)arg2;
- (id)logKey;
- (void)run;
- (void)setAccount:(id)arg1;
- (void)setLogKey:(id)arg1;

@end
