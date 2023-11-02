
@interface PMLTrainingMock : NSObject <PMLTrainingProtocol> {
    NSArray * _collectedSessions;
    NSMutableArray * _internalCollectedSessions;
    NSMutableDictionary * _lastTrainingFeaturizations;
}

@property (nonatomic, readonly) NSArray *collectedSessions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addSessionWithCovariates:(id)arg1 label:(long long)arg2 sessionDescriptor:(id)arg3 spotlightReference:(id)arg4 isInternal:(bool)arg5;
- (void)clearCollectedSessions;
- (id)collectedSessions;
- (void)deleteSessionsWithBundleID:(id)arg1;
- (void)deleteSessionsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2;
- (void)deleteSessionsWithIdentifiers:(id)arg1 bundleID:(id)arg2;
- (id)init;
- (id)lastTrainingFeaturizationForModelName:(id)arg1 andLocale:(id)arg2;
- (id)planReceivedWithPayload:(id)arg1 error:(id*)arg2;
- (id)planReceivedWithRecipe:(id)arg1 attachments:(id)arg2 error:(id*)arg3;
- (void)trimDbWithDeferralBlock:(id /* block */)arg1;
- (void)updateLastTrainingFeaturizationForModel:(id)arg1 andData:(id)arg2;
- (void)updateSessionsAndLabelForModel:(id)arg1 block:(id /* block */)arg2;

@end
