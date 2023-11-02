
@interface HKStateOfMind : HKSample <HDCoding, NSCopying, NSSecureCoding> {
    NSString * _context;
    NSArray * _domains;
    NSArray * _labels;
    long long  _reflectiveInterval;
    double  _valence;
}

@property (setter=_setContext:, nonatomic, copy) NSString *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (setter=_setDomains:, nonatomic, copy) NSArray *domains;
@property (readonly) unsigned long long hash;
@property (setter=_setLabels:, nonatomic, copy) NSArray *labels;
@property (setter=_setReflectiveInterval:, nonatomic) long long reflectiveInterval;
@property (readonly) Class superclass;
@property (setter=_setValence:, nonatomic) double valence;
@property (nonatomic, readonly) long long valenceClassification;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)stateOfMindWithDate:(id)arg1 reflectiveInterval:(long long)arg2 valence:(double)arg3 labels:(id)arg4 domains:(id)arg5 context:(id)arg6 metadata:(id)arg7;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;
+ (id)validateValence:(double)arg1;

- (void).cxx_destruct;
- (void)_setContext:(id)arg1;
- (void)_setDomains:(id)arg1;
- (void)_setLabels:(id)arg1;
- (void)_setReflectiveInterval:(long long)arg1;
- (void)_setValence:(double)arg1;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)domains;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAnyUnknownDomain;
- (bool)hasAnyUnknownLabel;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)labels;
- (long long)reflectiveInterval;
- (double)valence;
- (long long)valenceClassification;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;
- (bool)hd_insertRelatedDataWithPersistentID:(id)arg1 insertionContext:(id)arg2 profile:(id)arg3 transaction:(id)arg4 error:(id*)arg5;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (void)addDetailValuesToSection:(id)arg1;

@end
