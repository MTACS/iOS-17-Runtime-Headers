
@interface CNAPITriageLogger : NSObject <CNAPITriageLogger> {
    NSObject<OS_os_log> * _log;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSObject<OS_os_log> *log;
@property (readonly) Class superclass;

+ (id)os_log;
+ (void)setThreadEntryPoint:(SEL)arg1;
+ (id)threadEntryPoint;

- (void).cxx_destruct;
- (void)clientStoppedEnumerationForRequest:(id)arg1;
- (void)didExecuteFetchRequest:(id)arg1 duration:(double)arg2;
- (void)didReturnAllResultsForContactFetchRequest:(id)arg1;
- (id)init;
- (id)log;
- (void)request:(id)arg1 containsContact:(id)arg2;
- (void)request:(id)arg1 encounteredError:(id)arg2;
- (void)request:(id)arg1 failedWithError:(id)arg2;
- (void)request:(id)arg1 spentTimeInClientCode:(double)arg2;
- (void)request:(id)arg1 willReturnAnchor:(id)arg2;
- (void)willExecuteFetchRequest:(id)arg1;

@end
