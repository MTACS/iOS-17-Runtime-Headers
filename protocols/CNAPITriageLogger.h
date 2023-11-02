
@protocol CNAPITriageLogger <NSObject>

@required

- (void)clientStoppedEnumerationForRequest:(CNContactFetchRequest *)arg1;
- (void)didExecuteFetchRequest:(CNContactFetchRequest *)arg1 duration:(double)arg2;
- (void)didReturnAllResultsForContactFetchRequest:(CNContactFetchRequest *)arg1;
- (void)request:(CNContactFetchRequest *)arg1 containsContact:(CNContact *)arg2;
- (void)request:(CNContactFetchRequest *)arg1 encounteredError:(NSError *)arg2;
- (void)request:(CNContactFetchRequest *)arg1 spentTimeInClientCode:(double)arg2;
- (void)request:(CNContactFetchRequest *)arg1 willReturnAnchor:(CNResult *)arg2;
- (void)willExecuteFetchRequest:(CNContactFetchRequest *)arg1;

@end
