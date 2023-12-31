
@interface CXEndCallAction : CXCallAction {
    NSDate * _dateEnded;
}

@property (nonatomic, copy) NSDate *dateEnded;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)customDescription;
- (id)dateEnded;
- (void)encodeWithCoder:(id)arg1;
- (void)fulfill;
- (void)fulfillWithDateEnded:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDateEnded:(id)arg1;
- (void)updateAsFulfilledWithDateEnded:(id)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
