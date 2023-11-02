
@interface PKPaymentCommutePlanReminder : NSObject <NSSecureCoding> {
    double  _timeInterval;
}

@property (nonatomic) double timeInterval;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeInterval:(double)arg1;
- (void)setTimeInterval:(double)arg1;
- (double)timeInterval;

@end
