
@interface HKRelationshipConceptSelection : HKConceptSelection {
    unsigned long long  _direction;
    HKConceptSelection * _selection;
    long long  _type;
}

@property (nonatomic, readonly) unsigned long long direction;
@property (nonatomic, readonly, copy) HKConceptSelection *selection;
@property (nonatomic, readonly) long long type;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)direction;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDirection:(unsigned long long)arg1 type:(long long)arg2 selection:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)selection;
- (long long)type;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)predicateWithProfile:(id)arg1;

@end
