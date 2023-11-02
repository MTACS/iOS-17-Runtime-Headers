
@interface CXChannelTransmitStopAction : CXChannelAction {
    NSDate * _stopDate;
}

@property (nonatomic, retain) NSDate *stopDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)customDescription;
- (void)encodeWithCoder:(id)arg1;
- (void)fulfill;
- (void)fulfillWithStopDate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setStopDate:(id)arg1;
- (id)stopDate;
- (void)updateAsFulfilledWithStopDate:(id)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
