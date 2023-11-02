
@interface HKAttributeConceptSelection : HKConceptSelection {
    unsigned long long  _operatorType;
    long long  _type;
    <NSCopying><NSSecureCoding><NSObject> * _value;
}

@property (nonatomic, readonly) unsigned long long operatorType;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, copy) <NSCopying><NSSecureCoding><NSObject> *value;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAttribute:(long long)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)operatorType;
- (long long)type;
- (id)value;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)predicateWithProfile:(id)arg1;

@end
