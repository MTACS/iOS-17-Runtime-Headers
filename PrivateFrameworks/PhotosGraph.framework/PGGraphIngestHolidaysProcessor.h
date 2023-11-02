
@interface PGGraphIngestHolidaysProcessor : NSObject <PGGraphIngestProcessor, PGGraphMomentUpdateConsumer> {
    PGGraphBuilder * _graphBuilder;
    PGGraphIngestHolidayProcessorHelper * _helper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)requiredMomentUpdateTypes;

- (void).cxx_destruct;
- (void)deleteHolidayEdgesWithMomentNodes:(id)arg1 inGraph:(id)arg2;
- (id)initWithGraphBuilder:(id)arg1;
- (void)insertHolidaysBetweenLocalDate:(id)arg1 andLocalDate:(id)arg2 graph:(id)arg3 locale:(id)arg4 loggingConnection:(id)arg5 progressBlock:(id /* block */)arg6;
- (void)insertHolidaysWithMomentNodes:(id)arg1 graph:(id)arg2 locale:(id)arg3 loggingConnection:(id)arg4 progressBlock:(id /* block */)arg5;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2;
- (bool)shouldCreateHolidayEdgeForEventRule:(id)arg1 momentNode:(id)arg2 momentLocalDate:(id)arg3 withGraph:(id)arg4 loggingConnection:(id)arg5 localeCountryCode:(id)arg6 keyboardLanguageCodes:(id)arg7;
- (bool)shouldRunWithGraphUpdate:(id)arg1;

@end
