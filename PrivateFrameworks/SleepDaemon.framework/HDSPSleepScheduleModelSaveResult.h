
@interface HDSPSleepScheduleModelSaveResult : NSObject {
    HDSPSleepScheduleModelChangeEvaluation * _changeEvaluation;
    NSError * _error;
    bool  _shouldNotify;
    bool  _success;
}

@property (nonatomic, readonly) HDSPSleepScheduleModelChangeEvaluation *changeEvaluation;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) bool shouldNotify;
@property (nonatomic, readonly) bool success;

+ (id)emptyResult;
+ (id)saveFailedWithError:(id)arg1;

- (void).cxx_destruct;
- (id)changeEvaluation;
- (id)error;
- (id)initWithSuccess:(bool)arg1 changeEvaluation:(id)arg2 error:(id)arg3 shouldNotify:(bool)arg4;
- (bool)shouldNotify;
- (bool)success;

@end
