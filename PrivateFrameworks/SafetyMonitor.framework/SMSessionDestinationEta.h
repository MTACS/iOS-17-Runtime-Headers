
@interface SMSessionDestinationEta : NSObject <NSSecureCoding> {
    double  _additionalTravelTime;
    double  _expectedTravelTime;
    unsigned long long  _transportType;
}

@property (nonatomic, readonly) double additionalTravelTime;
@property (nonatomic, readonly) double expectedTravelTime;
@property (nonatomic, readonly) unsigned long long transportType;

+ (bool)supportsSecureCoding;

- (double)additionalTravelTime;
- (id)coarseEtaDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)etaDate;
- (double)expectedTravelTime;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithExpectedTravelTime:(double)arg1 additionalTravelTime:(double)arg2 transportType:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)outputToDictionary;
- (unsigned long long)transportType;

@end
