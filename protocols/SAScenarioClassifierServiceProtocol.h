
@protocol SAScenarioClassifierServiceProtocol

@required

- (void)addClient:(id <SAScenarioClassifierClientProtocol>)arg1;
- (void)ingestTAEvent:(id <TAEventProtocol>)arg1;
- (void)removeClient:(id <SAScenarioClassifierClientProtocol>)arg1;

@end
