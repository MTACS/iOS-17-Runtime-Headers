
@interface NPTPingResult : NSObject <NSCopying, NSSecureCoding> {
    NSString * _address;
    NSError * _error;
    double  _maxLatency;
    double  _meanLatency;
    double  _minLatency;
    double  _percentLost;
    NSArray * _pings;
    double  _standardDeviation;
}

@property (nonatomic, retain) NSString *address;
@property (nonatomic, readonly) NSDictionary *asDictionary;
@property (nonatomic, retain) NSError *error;
@property double maxLatency;
@property double meanLatency;
@property double minLatency;
@property double percentLost;
@property (nonatomic, retain) NSArray *pings;
@property double standardDeviation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)address;
- (id)asDictionary;
- (double)calculateStandardDeviation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPings:(id)arg1 usingAddress:(id)arg2;
- (double)maxLatency;
- (double)meanLatency;
- (double)minLatency;
- (double)percentLost;
- (id)pings;
- (void)populateFields;
- (void)setAddress:(id)arg1;
- (void)setError:(id)arg1;
- (void)setMaxLatency:(double)arg1;
- (void)setMeanLatency:(double)arg1;
- (void)setMinLatency:(double)arg1;
- (void)setPercentLost:(double)arg1;
- (void)setPings:(id)arg1;
- (void)setStandardDeviation:(double)arg1;
- (double)standardDeviation;

@end
