
@interface ATXUserEducationSuggestionCustomizeFocus : ATXUserEducationSuggestion {
    long long  _modeSemanticType;
}

@property (nonatomic, readonly) long long modeSemanticType;

// Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient

+ (long long)suggestionType;
+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithModeSemanticType:(long long)arg1;
- (long long)modeSemanticType;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

+ (bool)suggestionsAreSupportedForModeSemanticType:(long long)arg1;
+ (id)supportedModeSemanticTypeStrings;
+ (id)supportedModeSemanticTypes;

- (Class)metricClass;
- (id)server;
- (id)userDefaultsKeyForTrackingSuggestionState;

@end
