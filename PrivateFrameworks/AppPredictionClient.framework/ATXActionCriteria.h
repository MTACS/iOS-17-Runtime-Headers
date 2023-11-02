
@interface ATXActionCriteria : NSObject <ATXProtoBufWrapper, NSCopying, NSSecureCoding> {
    NSDate * _endDate;
    bool  _lockScreenEligible;
    NSPredicate * _predicate;
    NSDate * _startDate;
}

@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) bool lockScreenEligible;
@property (nonatomic, readonly) NSPredicate *predicate;
@property (nonatomic, readonly) NSDate *startDate;

+ (id)predicateValidForAirplaneModeOn:(bool)arg1;
+ (id)predicateValidForDNDStatusOn:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)description;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 lockScreenEligible:(bool)arg3 predicate:(id)arg4;
- (bool)isRelevant:(id)arg1;
- (id)json;
- (bool)lockScreenEligible;
- (id)predicate;
- (id)proto;
- (id)startDate;

@end
