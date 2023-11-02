
@interface HKUserDomainConceptNamedQuantity : HKUserDomainConceptProperty <HDCoding> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HKQuantity * _lock_quantity;
    NSString * _name;
    NSString * _unitString;
    double  _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) HKQuantity *quantity;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *unitString;
@property (nonatomic, readonly) double value;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)nullPropertyWithType:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 quantity:(id)arg2 type:(long long)arg3;
- (id)initWithName:(id)arg1 value:(double)arg2 unitString:(id)arg3 type:(long long)arg4 version:(long long)arg5 timestamp:(double)arg6 deleted:(bool)arg7;
- (id)initWithType:(long long)arg1 version:(long long)arg2 timestamp:(double)arg3 deleted:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)quantity;
- (id)unitString;
- (double)value;
- (id)valueDescription;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;

@end
