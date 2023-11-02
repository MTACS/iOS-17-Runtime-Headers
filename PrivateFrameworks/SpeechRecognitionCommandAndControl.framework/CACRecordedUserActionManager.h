
@interface CACRecordedUserActionManager : NSObject {
    CACRecordedUserActionFlow * _executingUserActionFlow;
    bool  _isExecuting;
    bool  _isRecording;
    NSMutableArray * _recordedUserActions;
}

@property (readonly) bool isExecuting;
@property (readonly) bool isRecording;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)addRecognizedSpokenCommand:(id)arg1;
- (void)beginExecutingRecordedUserActionFlow:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)cancelExecution;
- (id)init;
- (bool)isExecuting;
- (bool)isRecording;
- (id)recordedUserActionFlow;
- (void)startRecordingUserActions;
- (void)stopRecordingUserActions;

@end
