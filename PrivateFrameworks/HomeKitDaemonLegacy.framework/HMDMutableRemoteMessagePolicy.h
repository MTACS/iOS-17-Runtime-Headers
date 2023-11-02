
@interface HMDMutableRemoteMessagePolicy : HMDRemoteMessagePolicy

@property bool allowsAnonymousMessage;
@property bool requiresAccountMessage;
@property bool requiresSecureMessage;
@property unsigned long long roles;
@property unsigned long long transportRestriction;

+ (id)remoteMessagePolicyWithRequiresSecureMessage:(bool)arg1 allowsAnonymousMessage:(bool)arg2 requiresAccountMessage:(bool)arg3 transportRestriction:(unsigned long long)arg4 roles:(unsigned long long)arg5;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
