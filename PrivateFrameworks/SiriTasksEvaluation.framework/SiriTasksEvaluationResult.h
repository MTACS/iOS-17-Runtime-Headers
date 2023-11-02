
@interface SiriTasksEvaluationResult : NSObject {
    bool  _isEffectiveTask;
    bool  _isSuccessfulTask;
    NSString * _taskId;
}

@property (nonatomic) bool isEffectiveTask;
@property (nonatomic) bool isSuccessfulTask;
@property (nonatomic, retain) NSString *taskId;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSONData:(id)arg1;
- (id)initWithTaskId:(id)arg1 isEffectiveTask:(bool)arg2 isSuccessfulTask:(bool)arg3;
- (bool)isEffectiveTask;
- (bool)isSuccessfulTask;
- (void)setIsEffectiveTask:(bool)arg1;
- (void)setIsSuccessfulTask:(bool)arg1;
- (void)setTaskId:(id)arg1;
- (id)taskId;
- (id)toJSON;

@end
