
@interface _PSMessagesPinningFeedback : NSObject <NSSecureCoding> {
    long long  _actionType;
    NSArray * _actualPinnings;
    NSDate * _eventDate;
    long long  _interactionMethod;
    NSArray * _onboardingSuggestions;
    NSString * _trialId;
}

@property (nonatomic) long long actionType;
@property (nonatomic, readonly) NSArray *actualPinnings;
@property (nonatomic, readonly) NSDate *eventDate;
@property (nonatomic) long long interactionMethod;
@property (nonatomic, readonly) NSArray *onboardingSuggestions;
@property (nonatomic, copy) NSString *trialId;

+ (id)acceptedWithActualPinnings:(id)arg1 OnboardingSuggestions:(id)arg2;
+ (id)pinsChangedWithNowCurrentPins:(id)arg1;
+ (id)skipOnboardingWithOnboardingSuggestions:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)actionType;
- (id)actualPinnings;
- (void)encodeWithCoder:(id)arg1;
- (id)eventDate;
- (id)initWithAction:(long long)arg1 actualPinnings:(id)arg2 onboardingSuggestions:(id)arg3 trialId:(id)arg4 eventDate:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (long long)interactionMethod;
- (id)onboardingSuggestions;
- (void)setActionType:(long long)arg1;
- (void)setInteractionMethod:(long long)arg1;
- (void)setTrialId:(id)arg1;
- (id)trialId;

@end
