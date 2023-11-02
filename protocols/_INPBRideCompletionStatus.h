
@protocol _INPBRideCompletionStatus <NSObject>

@required

+ (Class)defaultTippingOptionsType;

- (int)StringAsFeedbackTypes:(NSString *)arg1;
- (void)addDefaultTippingOptions:(_INPBCurrencyAmountValue *)arg1;
- (void)addFeedbackType:(int)arg1;
- (bool)canceled;
- (bool)canceledByService;
- (void)clearDefaultTippingOptions;
- (void)clearFeedbackTypes;
- (bool)completed;
- (_INPBUserActivity *)completionUserActivity;
- (NSArray *)defaultTippingOptions;
- (_INPBCurrencyAmountValue *)defaultTippingOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)defaultTippingOptionsCount;
- (int)feedbackTypeAtIndex:(unsigned long long)arg1;
- (int*)feedbackTypes;
- (NSString *)feedbackTypesAsString:(int)arg1;
- (unsigned long long)feedbackTypesCount;
- (bool)hasCanceled;
- (bool)hasCanceledByService;
- (bool)hasCompleted;
- (bool)hasCompletionUserActivity;
- (bool)hasMissedPickup;
- (bool)hasOutstanding;
- (bool)hasPaymentAmount;
- (bool)missedPickup;
- (bool)outstanding;
- (_INPBCurrencyAmountValue *)paymentAmount;
- (void)setCanceled:(bool)arg1;
- (void)setCanceledByService:(bool)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setCompletionUserActivity:(_INPBUserActivity *)arg1;
- (void)setDefaultTippingOptions:(NSArray *)arg1;
- (void)setFeedbackTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setHasCanceled:(bool)arg1;
- (void)setHasCanceledByService:(bool)arg1;
- (void)setHasCompleted:(bool)arg1;
- (void)setHasMissedPickup:(bool)arg1;
- (void)setHasOutstanding:(bool)arg1;
- (void)setMissedPickup:(bool)arg1;
- (void)setOutstanding:(bool)arg1;
- (void)setPaymentAmount:(_INPBCurrencyAmountValue *)arg1;

@end
