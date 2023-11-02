
@interface TRITaskQueueOperation : NSBlockOperation {
    bool  _inProgress;
    <TRITask> * _task;
}

@property bool inProgress;
@property (nonatomic, retain) <TRITask> *task;

- (void).cxx_destruct;
- (bool)inProgress;
- (void)setInProgress:(bool)arg1;
- (void)setTask:(id)arg1;
- (id)task;

@end
