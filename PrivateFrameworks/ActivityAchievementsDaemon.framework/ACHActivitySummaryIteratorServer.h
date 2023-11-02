
@interface ACHActivitySummaryIteratorServer : HDStandardTaskServer <ACHActivitySummaryIteratorServerInterface> {
    HDActivitySummaryBuilder * _builder;
    NSCalendar * _calendar;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)remoteInterface;
- (void)remote_activitySummariesForStartDateComponents:(id)arg1 endDateComponents:(id)arg2 includePrivateProperties:(bool)arg3 completion:(id /* block */)arg4;

@end
