
@interface HKUserDomainConceptBasicProperty : HKUserDomainConceptProperty <HDCoding> {
    <NSCopying><NSSecureCoding><NSObject> * _value;
    long long  _valueType;
}

@property (nonatomic, readonly, copy) NSUUID *UUIDValue;
@property (nonatomic, readonly, copy) NSData *dataValue;
@property (nonatomic, readonly, copy) NSDate *dateValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *numberValue;
@property (nonatomic, readonly, copy) NSString *stringValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) <NSCopying><NSSecureCoding><NSObject> *value;
@property (nonatomic, readonly) long long valueType;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)nullPropertyWithType:(long long)arg1 version:(long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUIDValue;
- (id)_valueDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataValue;
- (id)dateValue;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 version:(long long)arg2 UUIDValue:(id)arg3;
- (id)initWithType:(long long)arg1 version:(long long)arg2 boolValue:(bool)arg3;
- (id)initWithType:(long long)arg1 version:(long long)arg2 dataValue:(id)arg3;
- (id)initWithType:(long long)arg1 version:(long long)arg2 dateValue:(id)arg3;
- (id)initWithType:(long long)arg1 version:(long long)arg2 doubleValue:(double)arg3;
- (id)initWithType:(long long)arg1 version:(long long)arg2 integerValue:(long long)arg3;
- (id)initWithType:(long long)arg1 version:(long long)arg2 stringValue:(id)arg3;
- (id)initWithType:(long long)arg1 version:(long long)arg2 timestamp:(double)arg3 deleted:(bool)arg4;
- (id)initWithType:(long long)arg1 version:(long long)arg2 timestamp:(double)arg3 valueType:(long long)arg4 value:(id)arg5;
- (id)initWithType:(long long)arg1 version:(long long)arg2 value:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)numberValue;
- (id)stringValue;
- (id)value;
- (id)valueDescription;
- (long long)valueType;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;

@end
