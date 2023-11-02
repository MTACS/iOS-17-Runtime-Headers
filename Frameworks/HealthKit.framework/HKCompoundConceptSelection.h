
@interface HKCompoundConceptSelection : HKConceptSelection {
    unsigned long long  _operationType;
    NSArray * _selections;
}

@property (nonatomic, readonly) unsigned long long operationType;
@property (nonatomic, readonly, copy) NSArray *selections;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSelections:(id)arg1 operationType:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)operationType;
- (id)selections;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)predicateWithProfile:(id)arg1;

@end
