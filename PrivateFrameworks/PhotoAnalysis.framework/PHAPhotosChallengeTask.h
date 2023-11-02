
@interface PHAPhotosChallengeTask : NSObject <PHATask> {
    long long  _limit;
    long long  _questionOptions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didProduceContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double incrementalWindow;
@property (nonatomic) long long limit;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) double period;
@property (nonatomic) long long questionOptions;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long version;

+ (id)currentQuestionsKVSDataFromGraphManager:(id)arg1;
+ (bool)postNewQuestionsNotificationIfNeededWithGraphManager:(id)arg1 notificationDate:(id)arg2;
+ (bool)postSubmissionNotificationIfNeededWithGraphManager:(id)arg1 notificationDate:(id)arg2;
+ (void)removeCurrentKVSDataFromGraphManager:(id)arg1;

- (bool)currentPlatformIsSupported;
- (id)incrementalKey;
- (id)init;
- (long long)limit;
- (id)name;
- (double)period;
- (int)priority;
- (long long)questionOptions;
- (bool)runWithGraphManager:(id)arg1 progressReporter:(id)arg2 error:(id*)arg3;
- (void)setLimit:(long long)arg1;
- (void)setQuestionOptions:(long long)arg1;
- (bool)shouldRunWithGraphManager:(id)arg1;
- (id)taskClassDependencies;
- (void)timeoutFatal:(bool)arg1;

@end
