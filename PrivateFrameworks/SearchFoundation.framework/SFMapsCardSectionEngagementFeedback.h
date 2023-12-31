
@interface SFMapsCardSectionEngagementFeedback : SFCardSectionEngagementFeedback {
    int  _feedbackType;
}

@property (nonatomic) int feedbackType;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (int)feedbackType;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeedbackType:(int)arg1;
- (void)setFeedbackType:(int)arg1;

@end
