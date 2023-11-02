
@interface MRExternalDeviceTransport : NSObject {
    NSArray * _allowedPlayerPaths;
    long long  _connectionType;
    bool  _isValid;
    bool  _requiresCustomPairing;
    NSArray * _subscribedPlayerPaths;
    NSString * _uid;
}

@property (nonatomic, readonly) NSArray *allowedPlayerPaths;
@property (nonatomic, readonly) long long connectionType;
@property (nonatomic, readonly) MRDeviceInfo *deviceInfo;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSString *hostname;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long port;
@property (nonatomic, readonly) bool requiresCustomPairing;
@property (nonatomic) bool shouldUseSystemAuthenticationPrompt;
@property (nonatomic, readonly) NSArray *subscribedPlayerPaths;
@property (nonatomic, readonly) bool supportsIdleDisconnection;
@property (nonatomic, readonly) bool supportsReconnection;
@property (nonatomic, readonly) NSString *uid;

- (void).cxx_destruct;
- (id)allowedPlayerPaths;
- (long long)connectionType;
- (id)createConnectionWithUserInfo:(id)arg1;
- (id)deviceInfo;
- (id)error;
- (id)hostname;
- (bool)isValid;
- (id)name;
- (long long)port;
- (bool)requiresCustomPairing;
- (void)resetWithError:(id)arg1;
- (void)setShouldUseSystemAuthenticationPrompt:(bool)arg1;
- (bool)shouldUseSystemAuthenticationPrompt;
- (id)subscribedPlayerPaths;
- (bool)supportsIdleDisconnection;
- (bool)supportsReconnection;
- (id)uid;

@end
