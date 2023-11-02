
@interface CoreDAVSRVLookupTask : CoreDAVTask {
    NSArray * _fetchedRecords;
    NSObject<OS_nw_resolver> * _resolver;
    NSString * _serviceString;
    NSTimer * _timeoutTimer;
}

@property (nonatomic, retain) NSArray *fetchedRecords;
@property (nonatomic, retain) NSString *serviceString;

- (void).cxx_destruct;
- (void)_runOnCallbackThread:(id /* block */)arg1;
- (id)description;
- (id)fetchedRecords;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (void)handleResolvedEndPoints:(id)arg1;
- (id)initWithServiceString:(id)arg1;
- (void)performCoreDAVTask;
- (id)serviceString;
- (void)setFetchedRecords:(id)arg1;
- (void)setServiceString:(id)arg1;

@end
