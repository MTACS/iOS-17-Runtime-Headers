
@interface DMFControlSessionIdentifier : DMFControlGroupIdentifier {
    unsigned int  _leaderIP;
    unsigned short  _port;
}

@property (nonatomic, readonly, copy) CRKRemoteEndpoint *crk_endpoint;
@property (nonatomic, readonly) DMFControlGroupIdentifier *groupIdentifier;
@property (nonatomic, readonly) unsigned int leaderIP;
@property (nonatomic, readonly) unsigned short port;

// Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2;
- (id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2 leaderIP:(unsigned int)arg3;
- (id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2 leaderIP:(unsigned int)arg3 port:(unsigned short)arg4;
- (id)initWithString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToControlSessionIdentifier:(id)arg1;
- (unsigned int)leaderIP;
- (unsigned short)port;
- (id)stringValue;

// Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit

- (id)crk_endpoint;

@end
