
@interface CDMContextUpdateService : CDMDAGBaseService {
    NSString * locale;
}

+ (bool)isEnabled;

- (void).cxx_destruct;
- (void)doCoreAnalyticsForContextUpdateOutcome:(int)arg1 numTurnsRollback:(int)arg2 locale:(id)arg3;
- (id)handle:(id)arg1;
- (id)handleRequestCommandTypeNames;
- (id)setup:(id)arg1;

@end
