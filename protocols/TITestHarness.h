
@protocol TITestHarness <NSObject>

@required

- (bool)outcomeIsFailureForTest:(id)arg1 withResult:(id)arg2;
- (bool)requiresMaintenance;
- (NSArray *)runConversationTest:(AutocorrectionTest *)arg1 trialID:(unsigned long long)arg2 withError:(id)arg3;
- (AutocorrectionResult *)runTest:(id)arg1 trialID:(unsigned long long)arg2 withError:(id)arg3;

@end
