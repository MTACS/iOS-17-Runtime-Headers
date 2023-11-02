
@interface RDEstimate : NSObject <NSCopying, NSSecureCoding> {
    NSString * _countryCode;
    unsigned int  _priority;
    NSDate * _timestamp;
}

@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) NSDate *timestamp;

+ (id)currentEstimateSet;
+ (id)currentEstimates;
+ (id)lastKnownEstimateSet;
+ (id)lastKnownEstimates;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)description;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)getPriority;
- (id)initWithCoder:(id)arg1;
- (id)initWithCountryCode:(id)arg1 priority:(unsigned int)arg2 timestamp:(id)arg3;
- (bool)priorityIsAtLeast:(unsigned int)arg1;
- (id)timestamp;

@end
