
@interface HKWorkoutZonesSample : HKSample <HDCoding> {
    NSArray * _zones;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *zones;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;
+ (id)zonesSampleWithType:(id)arg1 zones:(id)arg2 device:(id)arg3 metadata:(id)arg4;

- (void).cxx_destruct;
- (void)_setZones:(id)arg1;
- (bool)_validateFirstZone:(id)arg1 error:(id*)arg2;
- (bool)_validateLastZone:(id)arg1 error:(id*)arg2;
- (bool)_validateMiddleZones:(id)arg1 previousEndQuantity:(id)arg2 error:(id*)arg3;
- (bool)_validateStartAndEnd:(id)arg1 end:(id)arg2 error:(id*)arg3;
- (bool)_validateUnit:(id)arg1 error:(id*)arg2;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)zones;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

@end
