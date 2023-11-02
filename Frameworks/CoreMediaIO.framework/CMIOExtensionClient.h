
@interface CMIOExtensionClient : NSObject <NSCopying> {
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    long long  _cameraAuthorizationStatus;
    NSUUID * _clientID;
    NSString * _description;
    bool  _hasPendingCameraAuthorizationRequest;
    bool  _hasPendingMicrophoneAuthorizationRequest;
    bool  _isFromProxyExtensionManager;
    bool  _isToProxy;
    long long  _microphoneAuthorizationStatus;
    int  _pid;
    NSString * _redactedDescription;
    NSString * _signingID;
    STActivityAttribution * _stAttribution;
}

@property (readonly, copy) NSUUID *clientID;
@property (readonly) int pid;
@property (readonly, copy) NSString *signingID;

+ (id)clientInfoWithPID:(int)arg1 clientID:(id)arg2 auditToken:(struct { unsigned int x1[8]; })arg3 stAttribution:(id)arg4 isToProxy:(bool)arg5 isFromProxyExtensionManager:(bool)arg6;

- (struct { unsigned int x1[8]; })auditToken;
- (long long)authorizationStatusForMediaType:(unsigned int)arg1;
- (long long)cameraAuthorizationStatus;
- (id)clientID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCDictionary;
- (void)dealloc;
- (id)description;
- (bool)hasPendingCameraAuthorizationRequest;
- (bool)hasPendingMicrophoneAuthorizationRequest;
- (unsigned long long)hash;
- (id)initWithPID:(int)arg1 clientID:(id)arg2 auditToken:(struct { unsigned int x1[8]; })arg3 stAttribution:(id)arg4 isToProxy:(bool)arg5 isFromProxyExtensionManager:(bool)arg6;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFromProxyExtensionManager;
- (bool)isToProxy;
- (long long)microphoneAuthorizationStatus;
- (int)pid;
- (id)redactedDescription;
- (void)requestAccessForMediaType:(unsigned int)arg1 performPreFlightTest:(bool)arg2 reply:(id /* block */)arg3;
- (void)requestAccessForMediaType:(unsigned int)arg1 reply:(id /* block */)arg2;
- (void)setCameraAuthorizationStatus:(long long)arg1;
- (void)setHasPendingCameraAuthorizationRequest:(bool)arg1;
- (void)setHasPendingMicrophoneAuthorizationRequest:(bool)arg1;
- (void)setMicrophoneAuthorizationStatus:(long long)arg1;
- (id)signingID;

@end
