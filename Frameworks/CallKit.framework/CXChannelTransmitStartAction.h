
@interface CXChannelTransmitStartAction : CXChannelAction {
    NSDate * _startDate;
}

@property (nonatomic, retain) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)customDescription;
- (void)encodeWithCoder:(id)arg1;
- (void)fulfill;
- (void)fulfillWithStartDate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;
- (void)updateAsFulfilledWithStartDate:(id)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
