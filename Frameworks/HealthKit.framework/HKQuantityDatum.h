
@interface HKQuantityDatum : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    NSDateInterval * _dateInterval;
    HKQuantity * _quantity;
    NSData * _resumeContext;
    id /* block */  _saveCompletion;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly, copy) NSDateInterval *dateInterval;
@property (nonatomic, readonly, copy) HKQuantity *quantity;
@property (nonatomic, readonly, copy) NSData *resumeContext;
@property (nonatomic, copy) id /* block */ saveCompletion;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 quantity:(id)arg3 resumeContext:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)quantity;
- (id)resumeContext;
- (id /* block */)saveCompletion;
- (void)setSaveCompletion:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)quantityDatumWithHDQuantityDatum:(id)arg1;

@end
