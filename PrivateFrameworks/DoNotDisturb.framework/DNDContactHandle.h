
@interface DNDContactHandle : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString * _contactIdentifier;
    NSString * _normalizedValue;
    unsigned long long  _type;
    NSString * _value;
}

@property (nonatomic, readonly, copy) NSString *contactIdentifier;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly, copy) NSString *value;

// Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionForRedacted:(bool)arg1;
- (id)_initWithContactIdentifier:(id)arg1 type:(unsigned long long)arg2 value:(id)arg3;
- (id)contactIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)matchesContactHandle:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)normalizedValue;
- (id)redactedDescription;
- (unsigned long long)type;
- (id)value;

// Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer

- (bool)isPopulated;

@end
