
@interface CPLPowerAssertion : NSObject

+ (void)_doProtected:(id /* block */)arg1;
+ (void)_releaseAssertion;
+ (void)_retainAssertion;
+ (void)disableSleep;
+ (void)enableSleep;
+ (bool)hasEnoughPower;
+ (id)powerAssertionStatus;
+ (void)setHasEnoughPower:(bool)arg1;

@end
