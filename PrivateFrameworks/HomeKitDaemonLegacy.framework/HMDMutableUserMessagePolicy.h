
@interface HMDMutableUserMessagePolicy : HMDUserMessagePolicy

@property bool requiresCameraStreamingAccess;
@property bool requiresRemoteAccess;
@property unsigned long long userPrivilege;

+ (id)userMessagePolicyWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(bool)arg3;
+ (id)userMessagePolicyWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(bool)arg3 requiresCameraStreamingAccess:(bool)arg4;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
