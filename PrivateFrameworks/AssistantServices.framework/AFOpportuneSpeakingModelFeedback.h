
@interface AFOpportuneSpeakingModelFeedback : NSObject <NSSecureCoding> {
    NSDate * _lastNegativeFeedback;
    NSDictionary * _negativeFeedbackByContact;
}

@property (nonatomic, retain) NSDate *lastNegativeFeedback;
@property (nonatomic, retain) NSDictionary *negativeFeedbackByContact;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)lastNegativeFeedback;
- (id)negativeFeedbackByContact;
- (void)setLastNegativeFeedback:(id)arg1;
- (void)setNegativeFeedbackByContact:(id)arg1;

@end
