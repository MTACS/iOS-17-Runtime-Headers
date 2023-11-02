
@interface ATXUserEducationSuggestionFeedback : NSObject <NSSecureCoding> {
    unsigned long long  _feedbackType;
    <ATXUserEducationSuggestion> * _userEducationSuggestion;
}

@property (nonatomic, readonly) unsigned long long feedbackType;
@property (nonatomic, readonly) <ATXUserEducationSuggestion> *userEducationSuggestion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)feedbackType;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserEducationSuggestion:(id)arg1 feedbackType:(unsigned long long)arg2;
- (id)suggestion;
- (id)userEducationSuggestion;

@end
