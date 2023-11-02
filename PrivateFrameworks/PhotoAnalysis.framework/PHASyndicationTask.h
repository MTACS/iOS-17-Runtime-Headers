
@interface PHASyndicationTask : NSObject <PHATask> {
    bool  _performCurationJob;
    bool  _performGuestInferenceJob;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didProduceContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double incrementalWindow;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) bool performCurationJob;
@property (nonatomic) bool performGuestInferenceJob;
@property (nonatomic, readonly) double period;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long version;

- (bool)currentPlatformIsSupported;
- (id)incrementalKey;
- (id)init;
- (id)name;
- (bool)performCurationJob;
- (bool)performGuestInferenceJob;
- (double)period;
- (int)priority;
- (bool)runWithGraphManager:(id)arg1 progressReporter:(id)arg2 error:(id*)arg3;
- (void)setPerformCurationJob:(bool)arg1;
- (void)setPerformGuestInferenceJob:(bool)arg1;
- (bool)shouldRunWithGraphManager:(id)arg1;
- (id)taskClassDependencies;
- (void)timeoutFatal:(bool)arg1;

@end
