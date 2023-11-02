
@interface HKDateInterval : NSObject <HKDateInterval, NSCopying, NSSecureCoding> {
    NSDate * _endDate;
    NSDate * _startDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDate *startDate;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)startDate;

@end
