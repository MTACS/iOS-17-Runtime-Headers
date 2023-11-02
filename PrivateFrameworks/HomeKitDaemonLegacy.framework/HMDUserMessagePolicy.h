
@interface HMDUserMessagePolicy : HMFMessagePolicy <NSMutableCopying> {
    HMDHome * _home;
    NSUUID * _homeUUID;
    bool  _requiresCameraStreamingAccess;
    bool  _requiresRemoteAccess;
    unsigned long long  _userPrivilege;
}

@property (readonly) HMDHome *home;
@property (readonly) NSUUID *homeUUID;
@property bool requiresCameraStreamingAccess;
@property bool requiresRemoteAccess;
@property unsigned long long userPrivilege;

+ (id)userMessagePolicyWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(bool)arg3;
+ (id)userMessagePolicyWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(bool)arg3 requiresCameraStreamingAccess:(bool)arg4;

- (void).cxx_destruct;
- (id)__initWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(bool)arg3 requiresCameraStreamingAccess:(bool)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)home;
- (id)homeUUID;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)requiresCameraStreamingAccess;
- (bool)requiresRemoteAccess;
- (void)setRequiresCameraStreamingAccess:(bool)arg1;
- (void)setRequiresRemoteAccess:(bool)arg1;
- (void)setUserPrivilege:(unsigned long long)arg1;
- (unsigned long long)userPrivilege;

@end
