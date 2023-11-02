
@interface CNMetricsReporterSpy : NSObject <CNMetricsReporter> {
    NSMutableArray * _entries;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSArray *events;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)clearEvents;
- (id)events;
- (id)init;
- (void)logSimpleEvent:(id)arg1 forApplication:(id)arg2 andLog:(bool)arg3;
- (void)sendDictionary:(id)arg1 forEvent:(id)arg2 andLog:(bool)arg3;

@end
