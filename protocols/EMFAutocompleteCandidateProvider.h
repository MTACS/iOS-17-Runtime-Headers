
@protocol EMFAutocompleteCandidateProvider

@required

- (void)enumerateCandidatesMatchingPrefix:(void *)arg1 withEnumerationType:(void *)arg2 maxCandidates:(void *)arg3 usingBlock:(void *)arg4; // needs 4 arg types, found 11: NSString *, long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, long long, bool*, void*
- (NSString *)firstCandidateMatchingPrefix:(NSString *)arg1;
- (bool)isValidToken:(NSString *)arg1;

@end
