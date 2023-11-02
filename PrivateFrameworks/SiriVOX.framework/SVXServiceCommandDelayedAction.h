
@interface SVXServiceCommandDelayedAction : NSObject {
    SAUIDelayedActionCommand * _command;
    <SVXTaskTracking> * _taskTracker;
}

@property (nonatomic, readonly, copy) SAUIDelayedActionCommand *command;
@property (nonatomic, readonly) <SVXTaskTracking> *taskTracker;

- (void).cxx_destruct;
- (id)command;
- (id)initWithCommand:(id)arg1 taskTracker:(id)arg2;
- (id)taskTracker;

@end
