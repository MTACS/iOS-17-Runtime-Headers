
@interface TVRViewServiceConfigContext : NSObject {
    NSString * _deviceIdentifier;
    long long  _deviceIdentifierType;
    long long  _deviceType;
    id /* block */  _dismissalAnimations;
    unsigned long long  _dismissalType;
    NSString * _lastActiveEndpointIdentifier;
    long long  _launchContext;
    long long  _launchMethod;
    id /* block */  _presentationAnimations;
}

@property (nonatomic, readonly) NSString *deviceIdentifier;
@property (nonatomic, readonly) long long deviceIdentifierType;
@property (nonatomic, readonly) long long deviceType;
@property (nonatomic, copy) id /* block */ dismissalAnimations;
@property (nonatomic) unsigned long long dismissalType;
@property (nonatomic, copy) NSString *lastActiveEndpointIdentifier;
@property (nonatomic, readonly) long long launchContext;
@property (nonatomic, readonly) long long launchMethod;
@property (nonatomic, copy) id /* block */ presentationAnimations;
@property (nonatomic, readonly) NSDictionary *userInfo;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)_initWithLaunchContext:(long long)arg1;
- (id)_initWithUserInfo:(id)arg1;
- (id)description;
- (id)deviceIdentifier;
- (long long)deviceIdentifierType;
- (long long)deviceType;
- (id /* block */)dismissalAnimations;
- (unsigned long long)dismissalType;
- (id)init;
- (id)initWithDeviceIdentifier:(id)arg1 identifierType:(long long)arg2 deviceType:(long long)arg3 launchContext:(long long)arg4;
- (id)initWithDeviceIdentifier:(id)arg1 identifierType:(long long)arg2 deviceType:(long long)arg3 launchContext:(long long)arg4 launchMethod:(long long)arg5;
- (id)lastActiveEndpointIdentifier;
- (long long)launchContext;
- (long long)launchMethod;
- (id /* block */)presentationAnimations;
- (void)setDismissalAnimations:(id /* block */)arg1;
- (void)setDismissalType:(unsigned long long)arg1;
- (void)setLastActiveEndpointIdentifier:(id)arg1;
- (void)setPresentationAnimations:(id /* block */)arg1;
- (id)userInfo;

@end
