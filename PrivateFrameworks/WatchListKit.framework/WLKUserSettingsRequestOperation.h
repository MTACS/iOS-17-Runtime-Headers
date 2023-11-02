
@interface WLKUserSettingsRequestOperation : WLKUTSNetworkRequestOperation {
    unsigned long long  _action;
    NSString * _caller;
    WLKUserSettings * _response;
    WLKUserSettings * _userSettings;
}

@property (nonatomic, readonly) unsigned long long action;
@property (nonatomic, readonly, copy) NSString *caller;
@property (nonatomic, readonly) WLKUserSettings *response;
@property (nonatomic, readonly, copy) WLKUserSettings *userSettings;

- (void).cxx_destruct;
- (unsigned long long)action;
- (id)caller;
- (id)initWithAction:(unsigned long long)arg1 userSettings:(id)arg2;
- (id)initWithAction:(unsigned long long)arg1 userSettings:(id)arg2 caller:(id)arg3;
- (void)processResponse;
- (id)response;
- (id)userSettings;

@end
