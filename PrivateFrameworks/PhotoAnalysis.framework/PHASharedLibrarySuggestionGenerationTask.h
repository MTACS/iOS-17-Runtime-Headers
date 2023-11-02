
@interface PHASharedLibrarySuggestionGenerationTask : NSObject <PHATask> {
    short  _taskType;
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

+ (bool)resetSuggestionsWithGraphManager:(id)arg1 error:(id*)arg2;

- (void)_sendNotificationWithPhotoLibrary:(id)arg1 loggingConnection:(id)arg2;
- (bool)currentPlatformIsSupported;
- (id)incrementalKey;
- (id)initWithTaskType:(short)arg1;
- (id)name;
- (double)period;
- (int)priority;
- (bool)runWithGraphManager:(id)arg1 progressReporter:(id)arg2 error:(id*)arg3;
- (bool)runWithGraphManager:(id)arg1 withIncrementalChange:(id)arg2 progressReporter:(id)arg3 error:(id*)arg4;
- (bool)shouldRunWithGraphManager:(id)arg1;
- (id)taskClassDependencies;
- (void)timeoutFatal:(bool)arg1;

@end
