
@interface HMUserInviteInformation : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding> {
    bool  _administrator;
    bool  _announceAccessAllowed;
    unsigned long long  _camerasAccessLevel;
    HMUserHomeAccessSettings * _homeAccessSettings;
    bool  _remoteAccessAllowed;
    NSString * _userID;
}

@property (getter=isAdministrator, readonly) bool administrator;
@property (getter=isAnnounceAccessAllowed, readonly) bool announceAccessAllowed;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (nonatomic, readonly) unsigned long long camerasAccessLevel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) HMUserHomeAccessSettings *homeAccessSettings;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (getter=isRemoteAccessAllowed, readonly) bool remoteAccessAllowed;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (copy) NSString *userID;

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (unsigned long long)camerasAccessLevel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)homeAccessSettings;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1 administrator:(bool)arg2 remoteAccess:(bool)arg3;
- (id)initWithUser:(id)arg1 administrator:(bool)arg2 remoteAccess:(bool)arg3 announceAccess:(bool)arg4 camerasAccessLevel:(unsigned long long)arg5;
- (id)initWithUser:(id)arg1 administrator:(bool)arg2 remoteAccess:(bool)arg3 announceAccess:(bool)arg4 camerasAccessLevel:(unsigned long long)arg5 homeAccessSettings:(id)arg6;
- (bool)isAdministrator;
- (bool)isAnnounceAccessAllowed;
- (bool)isEqual:(id)arg1;
- (bool)isRemoteAccessAllowed;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)privateDescription;
- (void)setHomeAccessSettings:(id)arg1;
- (void)setUserID:(id)arg1;
- (id)shortDescription;
- (id)userID;

@end
