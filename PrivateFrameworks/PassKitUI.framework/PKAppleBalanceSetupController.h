
@interface PKAppleBalanceSetupController : NSObject {
    PKAccount * _account;
    PKAppleBalanceDirectTopUpConfiguration * _configuration;
    PKAppleBalanceCredential * _credential;
    long long  _setupContext;
    bool  _uiOnly;
}

@property (nonatomic, retain) PKAccount *account;
@property (nonatomic, retain) PKAppleBalanceDirectTopUpConfiguration *configuration;
@property (nonatomic, readonly) PKAppleBalanceCredential *credential;
@property (nonatomic, readonly) long long setupContext;
@property (nonatomic) bool uiOnly;

- (void).cxx_destruct;
- (id)account;
- (id)configuration;
- (id)credential;
- (id)initWithProduct:(id)arg1 setupContext:(long long)arg2;
- (id)initWithSetupContext:(long long)arg1 uiOnly:(bool)arg2;
- (void)setAccount:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setUiOnly:(bool)arg1;
- (long long)setupContext;
- (bool)uiOnly;

@end
