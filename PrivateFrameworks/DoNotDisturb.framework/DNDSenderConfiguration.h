
@interface DNDSenderConfiguration : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSMutableSet * _allowedContactGroups;
    NSMutableSet * _allowedContactTypes;
    NSMutableSet * _allowedContacts;
    NSMutableSet * _deniedContactGroups;
    NSMutableSet * _deniedContactTypes;
    NSMutableSet * _deniedContacts;
    DNDBypassSettings * _phoneCallBypassSettings;
}

@property (nonatomic, readonly, copy) NSSet *allowedContactGroups;
@property (nonatomic, readonly, copy) NSSet *allowedContactTypes;
@property (nonatomic, readonly, copy) NSSet *allowedContacts;
@property (nonatomic, readonly, copy) NSSet *deniedContactGroups;
@property (nonatomic, readonly, copy) NSSet *deniedContactTypes;
@property (nonatomic, readonly, copy) NSSet *deniedContacts;
@property (nonatomic, readonly, copy) DNDBypassSettings *phoneCallBypassSettings;

// Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionForRedacted:(bool)arg1;
- (id)_evaluatedBypassSettings:(id)arg1;
- (id)_initWithAllowedContactTypes:(id)arg1 deniedContactTypes:(id)arg2 allowedContactGroups:(id)arg3 deniedContactGroups:(id)arg4 allowedContacts:(id)arg5 deniedContacts:(id)arg6 phoneCallBypassSettings:(id)arg7;
- (id)_redactedDescriptionsForContacts:(id)arg1;
- (id)allowedContactGroups;
- (id)allowedContactTypes;
- (id)allowedContacts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deniedContactGroups;
- (id)deniedContactTypes;
- (id)deniedContacts;
- (id)description;
- (void)diffAgainstObject:(id)arg1 usingDiffBuilder:(id)arg2 withDescription:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)phoneCallBypassSettings;
- (id)redactedDescription;

// Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer

+ (id)configurationForRecord:(id)arg1;

- (id)makeRecord;
- (id)sanitizedConfigurationWithContactStore:(id)arg1;

@end
