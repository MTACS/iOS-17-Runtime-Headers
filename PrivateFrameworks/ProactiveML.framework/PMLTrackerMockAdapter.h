
@interface PMLTrackerMockAdapter : NSObject <PMLTrackerAdapterProtocol> {
    NSMutableArray * _trackedMessages;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)clearAllTrackedMessages;
- (id)init;
- (void)postMetricId:(unsigned int)arg1 message:(id)arg2;
- (id)trackedMessagesByClass:(Class)arg1;

@end
