
@interface SAUIDelayedConfirmationView : SAUIConfirmationView

@property (nonatomic) long long autoConfirmDelay;

+ (id)delayedConfirmationView;
+ (id)delayedConfirmationViewWithDictionary:(id)arg1 context:(id)arg2;

- (long long)autoConfirmDelay;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAutoConfirmDelay:(long long)arg1;

@end
