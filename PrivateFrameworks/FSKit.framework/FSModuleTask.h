
@interface FSModuleTask : NSObject {
    FSTaskProgressConnector * _connector;
    FSTaskDescription * _taskDescription;
    NSProgress * _taskProgress;
    NSUUID * _taskUUID;
    bool  _wasCanceled;
}

@property (retain) FSTaskProgressConnector *connector;
@property (retain) FSTaskDescription *taskDescription;
@property (retain) NSProgress *taskProgress;
@property (copy) NSUUID *taskUUID;
@property bool wasCanceled;

+ (id)newWithID:(id)arg1 description:(id)arg2 progress:(id)arg3;

- (void).cxx_destruct;
- (id)connector;
- (id)init;
- (id)initWithID:(id)arg1 description:(id)arg2 progress:(id)arg3;
- (void)setConnector:(id)arg1;
- (void)setTaskDescription:(id)arg1;
- (void)setTaskProgress:(id)arg1;
- (void)setTaskUUID:(id)arg1;
- (void)setWasCanceled:(bool)arg1;
- (id)taskDescription;
- (id)taskProgress;
- (id)taskUUID;
- (bool)wasCanceled;

@end
