
@interface CNMockAPITriageLogger : NSObject <CNAPITriageLogger>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)clientStoppedEnumerationForRequest:(id)arg1;
- (void)didExecuteFetchRequest:(id)arg1 duration:(double)arg2;
- (void)didReturnAllResultsForContactFetchRequest:(id)arg1;
- (void)request:(id)arg1 containsContact:(id)arg2;
- (void)request:(id)arg1 encounteredError:(id)arg2;
- (void)request:(id)arg1 spentTimeInClientCode:(double)arg2;
- (void)request:(id)arg1 willReturnAnchor:(id)arg2;
- (void)willExecuteFetchRequest:(id)arg1;

@end
