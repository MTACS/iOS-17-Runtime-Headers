
@interface PHAMemoriesEnrichmentTask : NSObject <PHATask> {
    unsigned long long  _numberOfMemoriesToEnrich;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didProduceContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double incrementalWindow;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) double period;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long version;

- (bool)currentPlatformIsSupported;
- (id)incrementalKey;
- (id)initWithOptions:(id)arg1;
- (id)memoriesEnrichmentProcessor;
- (id)name;
- (double)period;
- (int)priority;
- (bool)runWithGraphManager:(id)arg1 progressReporter:(id)arg2 error:(id*)arg3;
- (bool)runWithGraphManager:(id)arg1 withIncrementalChange:(id)arg2 progressReporter:(id)arg3 error:(id*)arg4;
- (bool)shouldRunWithGraphManager:(id)arg1;
- (id)taskClassDependencies;
- (void)timeoutFatal:(bool)arg1;

@end
