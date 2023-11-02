
@interface IRPolicyEngine : NSObject {
    IRClassificatonGenerator * _classificatonGenerator;
    NSString * _lastEventsString;
    IRCandidateWrapperOrderOfExection * _orderOfExecution;
    long long  _servicePackage;
    <IRServicePackageAdapter> * _servicePackageAdapter;
}

@property (nonatomic, retain) IRClassificatonGenerator *classificatonGenerator;
@property (nonatomic, readonly, copy) NSDictionary *contexts;
@property (nonatomic, retain) NSString *lastEventsString;
@property (nonatomic, readonly, copy) IRCandidateWrapperOrderOfExection *orderOfExecution;
@property (nonatomic, readonly, copy) NSDictionary *policyInspections;
@property (nonatomic) long long servicePackage;
@property (nonatomic, retain) <IRServicePackageAdapter> *servicePackageAdapter;

- (void).cxx_destruct;
- (id)_lastEventsStringFromHistoryContainer:(id)arg1 candidatesContainer:(id)arg2 miloResults:(id)arg3;
- (id)classificatonGenerator;
- (id)contexts;
- (bool)didUpdateContextWithDate:(id)arg1 candidatesContainer:(id)arg2 historyEventsContainer:(id)arg3 systemState:(id)arg4 miloProviderLslPredictionResults:(id)arg5 nearbyDeviceContainer:(id)arg6 fillInspection:(bool)arg7;
- (void)enableClassificationGenerator;
- (id)initWithServicePackage:(long long)arg1;
- (id)lastEventsString;
- (id)orderOfExecution;
- (id)policyInspections;
- (long long)servicePackage;
- (id)servicePackageAdapter;
- (void)setClassificatonGenerator:(id)arg1;
- (void)setLastEventsString:(id)arg1;
- (void)setServicePackage:(long long)arg1;
- (void)setServicePackageAdapter:(id)arg1;
- (bool)shouldAskForLowLatencyMiLo:(id)arg1;
- (bool)shouldLabelMiLoForEvent:(id)arg1;
- (bool)shouldRejectEvent:(id)arg1 withHistoryEventsContainer:(id)arg2;

@end
