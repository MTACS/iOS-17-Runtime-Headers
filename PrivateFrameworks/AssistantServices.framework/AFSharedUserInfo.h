
@interface AFSharedUserInfo : NSObject <NSCopying, NSSecureCoding> {
    AFCompanionDeviceInfo * _companionDeviceInfo;
    bool  _companionLinkReady;
    NSString * _homeUserId;
    NSString * _iCloudAltDSID;
    NSString * _loggableSharedUserId;
    bool  _personalRequestsEnabled;
    NSString * _sharedUserId;
}

@property (nonatomic, readonly, copy) AFCompanionDeviceInfo *companionDeviceInfo;
@property (nonatomic, readonly) bool companionLinkReady;
@property (nonatomic, readonly, copy) NSString *homeUserId;
@property (nonatomic, readonly, copy) NSString *iCloudAltDSID;
@property (nonatomic, readonly, copy) NSString *loggableSharedUserId;
@property (nonatomic, readonly) bool personalRequestsEnabled;
@property (nonatomic, readonly, copy) NSString *sharedUserId;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)companionDeviceInfo;
- (bool)companionLinkReady;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)homeUserId;
- (id)iCloudAltDSID;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSharedUserId:(id)arg1 loggableSharedUserId:(id)arg2 companionDeviceInfo:(id)arg3 personalRequestsEnabled:(bool)arg4 companionLinkReady:(bool)arg5 homeUserId:(id)arg6 iCloudAltDSID:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)loggableSharedUserId;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (bool)personalRequestsEnabled;
- (id)sharedUserId;

@end
