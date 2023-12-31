
@interface DMFControlGroupIdentifier : NSObject <NSCopying, NSSecureCoding> {
    unsigned short  _groupID;
    NSUUID * _organizationUUID;
}

@property (nonatomic, readonly) unsigned short groupID;
@property (nonatomic, readonly, copy) NSUUID *organizationUUID;
@property (nonatomic, readonly, copy) NSString *stringValue;

// Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned short)groupID;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2;
- (id)initWithString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToGroupIdentifier:(id)arg1;
- (id)organizationUUID;
- (id)stringValue;

// Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit

+ (id)crk_adHocXPCGroupIdentifier;
+ (id)crk_asmXPCGroupIdentifier;
+ (unsigned short)crk_groupIDWithOpaqueString:(id)arg1;
+ (id)crk_identifierWithOpaqueString:(id)arg1;
+ (id)crk_managedXPCGroupIdentifier;

@end
