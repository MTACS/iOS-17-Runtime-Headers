
@interface GetSuggestionsIntentResponse : INIntentResponse {
    void code;
}

@property (nonatomic) long long code;
@property (nonatomic, copy) NSArray *suggestions;

// Image: /System/Library/PrivateFrameworks/SiriInferenceIntents.framework/SiriInferenceIntents

- (long long)code;
- (id)init;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setCode:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/SiriInference.framework/SiriInference

+ (bool)supportsSecureCoding;

@end
