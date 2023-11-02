
@protocol AFRelinquishableAssertion <AFAssertion>

@required

- (void)relinquishWithContext:(AFAssertionContext *)arg1 options:(unsigned long long)arg2;
- (void)relinquishWithError:(NSError *)arg1 options:(unsigned long long)arg2;

@end
