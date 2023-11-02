
@interface HKProfileIdentifier : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _identifier;
    long long  _type;
}

@property (readonly, copy) NSUUID *identifier;
@property (readonly) long long type;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_profileWithUUID:(id)arg1 type:(long long)arg2;
+ (bool)isValidProfileType:(long long)arg1;
+ (bool)isValidSecondaryProfileType:(long long)arg1;
+ (id)primaryProfile;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)type;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)hd_profileIdentifierWithSyncCircleIdentifier:(id)arg1;

- (id)hd_syncCircleIdentifier;

@end
