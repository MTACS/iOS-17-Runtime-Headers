
@interface _SWCPrefs : NSObject

@property (getter=isAppleInternal, readonly) bool appleInternal;
@property (getter=isFastCheckEnabled, readonly) bool fastCheckEnabled;
@property (readonly) unsigned long long maximumRetryCount;
@property (readonly) double retryIntervalAfterFailure;
@property (readonly) double retryIntervalAfterSuccess;
@property (readonly) bool verifyExtendedValidation;

+ (id)sharedPrefs;

- (bool)_boolForKey:(id)arg1 defaultValue:(bool)arg2;
- (id)_init;
- (unsigned long long)_recheckFuzzForSuccess:(bool)arg1;
- (void)_setString:(id)arg1 forKey:(id)arg2;
- (id)_stringForKey:(id)arg1 defaultValue:(id)arg2;
- (unsigned long long)_unsignedIntegerForKey:(id)arg1 defaultValue:(unsigned long long)arg2;
- (unsigned long long)_unsignedIntegerForKey:(id)arg1 defaultValue:(unsigned long long)arg2 minimumValue:(unsigned long long)arg3 maximumValue:(unsigned long long)arg4;
- (id)containerURLReturningError:(id*)arg1;
- (id)descriptionOfAllPrefs;
- (bool)isAppleInternal;
- (bool)isFastCheckEnabled;
- (unsigned long long)maximumRetryCount;
- (double)retryIntervalAfterFailure;
- (double)retryIntervalAfterReachLimitWithFailure:(unsigned long long)arg1;
- (double)retryIntervalAfterSuccess;
- (double)retryIntervalAfterSuccess:(bool)arg1;
- (bool)verifyExtendedValidation;

@end
