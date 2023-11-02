
@interface SATaskThreadCallTrees : NSObject {
    SATask * _task;
    NSArray * _threadCallTrees;
}

@property (readonly) SATask *task;
@property (readonly) NSArray *threadCallTrees;

- (void).cxx_destruct;
- (id)task;
- (id)threadCallTrees;

@end
