
@interface ATTrackingEnforcementManager : NSObject

+ (bool)isDefaultReturned;
+ (id)lastBagLookup;
+ (bool)lastEnforcement;
+ (long long)lastReasonCode;
+ (void)setIsDefaultReturned:(bool)arg1;
+ (void)setLastBagLookup:(id)arg1;
+ (void)setLastEnforcement:(bool)arg1;
+ (void)setLastReasonCode:(long long)arg1;
+ (bool)shouldEnforceTrackingWithReasonCode:(long long*)arg1;

@end
