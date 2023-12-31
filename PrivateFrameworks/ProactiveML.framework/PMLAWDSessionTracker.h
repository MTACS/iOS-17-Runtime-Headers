
@interface PMLAWDSessionTracker : PMLAWDBaseTracker

+ (id)trackerForModelName:(id)arg1 modelVersion:(id)arg2;

- (void)trackSessionWithCovariates:(id)arg1 label:(unsigned long long)arg2 locale:(id)arg3;
- (void)trackSessionWithCovariates:(id)arg1 label:(unsigned long long)arg2 locale:(id)arg3 supervisionType:(unsigned long long)arg4;

@end
