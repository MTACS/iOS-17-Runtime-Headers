
@interface SUManagedDeviceUpdateDelay : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _delayPeriod;
    NSDate * _delayedStartDate;
    bool  _isDelayed;
}

@property (nonatomic) unsigned long long delayPeriod;
@property (nonatomic, retain) NSDate *delayedStartDate;
@property (nonatomic) bool isDelayed;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delayEndDate;
- (unsigned long long)delayPeriod;
- (unsigned long long)delayUnit;
- (id)delayedStartDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDelay:(id)arg1;
- (bool)isDelayed;
- (void)setDelayPeriod:(unsigned long long)arg1;
- (void)setDelayedStartDate:(id)arg1;
- (void)setIsDelayed:(bool)arg1;

@end
