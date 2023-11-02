
@interface TTSVBSiriTTSTrainerTask : NSObject {
    SiriTTSTrainerTask * _task;
}

@property (nonatomic, readonly) long long currentTaskTotal;
@property (nonatomic, readonly) long long currentTaskValue;
@property (nonatomic, readonly) bool isUnfinishedOrPending;
@property (nonatomic, readonly) double normalizedProgressValue;
@property (nonatomic, readonly) long long status;
@property (nonatomic, retain) SiriTTSTrainerTask *task;
@property (nonatomic, readonly) SiriTTSTrainerTask *task;
@property (nonatomic, readonly) NSString *taskID;
@property (nonatomic, readonly) long long trainingStatus;

- (void).cxx_destruct;
- (long long)_ttsvbStatusForSiriTaskStatus:(long long)arg1;
- (long long)_ttsvbStatusForSiriTrainingStatus:(long long)arg1;
- (long long)currentTaskTotal;
- (long long)currentTaskValue;
- (id)description;
- (id)initWithSiriTTSTrainerTask:(id)arg1;
- (id)initWithTaskID:(id)arg1 trainingAssetURL:(id)arg2 dataAssetURL:(id)arg3 inferenceAssetURL:(id)arg4 trainingMode:(long long)arg5 startImmediately:(bool)arg6;
- (bool)isUnfinishedOrPending;
- (double)normalizedProgressValue;
- (void)setTask:(id)arg1;
- (long long)status;
- (id)task;
- (id)taskID;
- (long long)trainingStatus;

@end
