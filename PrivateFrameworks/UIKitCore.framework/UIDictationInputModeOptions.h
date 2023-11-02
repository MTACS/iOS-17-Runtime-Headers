
@interface UIDictationInputModeOptions : NSObject <NSSecureCoding> {
    NSString * _invocationSource;
    bool  _shouldStayInDictationInputModeIfAutoEndpointed;
    bool  _shouldSupressShowingAlternativesAutomatically;
}

@property (nonatomic, copy) NSString *invocationSource;
@property (nonatomic) bool shouldStayInDictationInputModeIfAutoEndpointed;
@property (nonatomic) bool shouldSupressShowingAlternativesAutomatically;

+ (id)dictationInputModeOptionsWithInvocationSource:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)invocationSource;
- (void)setInvocationSource:(id)arg1;
- (void)setShouldStayInDictationInputModeIfAutoEndpointed:(bool)arg1;
- (void)setShouldSupressShowingAlternativesAutomatically:(bool)arg1;
- (bool)shouldStayInDictationInputModeIfAutoEndpointed;
- (bool)shouldSupressShowingAlternativesAutomatically;

@end
