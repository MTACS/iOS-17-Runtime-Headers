
@interface ATXUserEducationSuggestionEvent : NSObject <NSSecureCoding> {
    <ATXUserEducationSuggestion> * _userEducationSuggestion;
    unsigned long long  _userEducationSuggestionEventType;
}

@property (nonatomic, readonly) <ATXUserEducationSuggestion> *userEducationSuggestion;
@property (nonatomic, readonly) unsigned long long userEducationSuggestionEventType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserEducationSuggestion:(id)arg1 userEducationSuggestionEventType:(unsigned long long)arg2;
- (id)userEducationSuggestion;
- (unsigned long long)userEducationSuggestionEventType;

@end
