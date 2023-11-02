
@interface ATXUserEducationSuggestionFocusModeSetup : ATXUserEducationSuggestion {
    long long  _modeSemanticType;
}

@property (nonatomic, readonly) long long modeSemanticType;

+ (long long)suggestionType;
+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithModeSemanticType:(long long)arg1;
- (long long)modeSemanticType;

@end
