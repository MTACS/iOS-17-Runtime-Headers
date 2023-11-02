
@interface PGNamingCalendarAnalyzer : NSObject <PGNamingAnalyzer> {
    PGGraphNamingProcessor * _processor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)findCalendarMatchesFromEventUniversalStartDateTime:(id)arg1 eventUniversalEndDateTime:(id)arg2 personAttendees:(id)arg3 graph:(id)arg4 momentNodes:(id)arg5;
- (id)initWithNamingProcessor:(id)arg1;
- (id)name;
- (void)runAnalysisWithProgressBlock:(id /* block */)arg1;

@end
