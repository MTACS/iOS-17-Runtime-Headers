
@interface TAPeopleDensityResult : NSObject <OSLogCoding, TAEventProtocol> {
    NSDictionary * _additionalInfo;
    double  _confidence;
    NSDate * _date;
    NSDateInterval * _observationInterval;
    long long  _peopleDensityState;
}

@property (nonatomic, readonly, copy) NSDictionary *additionalInfo;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDateInterval *observationInterval;
@property (nonatomic, readonly) long long peopleDensityState;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalInfo;
- (double)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)descriptionDictionary;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;
- (id)getDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(long long)arg1 confidence:(double)arg2 observationInterval:(id)arg3 additionalInfo:(id)arg4 date:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)observationInterval;
- (long long)peopleDensityState;

@end
