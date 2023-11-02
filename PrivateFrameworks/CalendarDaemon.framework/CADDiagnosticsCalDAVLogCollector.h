
@interface CADDiagnosticsCalDAVLogCollector : NSObject <CADDiagnosticLogCollector> {
    NSArray * _orderedInputURLs;
    NSArray * _orderedOutputURLs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)collect:(id)arg1;
- (void)determineExpectedOutputFiles:(id)arg1;
- (id)findAllLogFiles:(id)arg1;
- (id)parseFilenameDates:(id)arg1 context:(id)arg2;
- (id)sortAndTrimLogFiles:(id)arg1 context:(id)arg2;

@end
