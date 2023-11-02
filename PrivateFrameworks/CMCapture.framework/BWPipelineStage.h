
@interface BWPipelineStage : NSObject {
    NSObject<OS_dispatch_group> * _executionGroup;
    NSObject<OS_dispatch_queue> * _executionQueue;
    NSMutableArray * _inputsForQueuedMessages;
    NSString * _name;
    unsigned int  _priority;
    NSMutableArray * _queuedMessages;
    bool  _stillImagePipelineStage;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned int priority;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) bool stillImagePipelineStage;

+ (void)initialize;
+ (id)pipelineStageForStillImagesWithName:(id)arg1 priority:(unsigned int)arg2;
+ (id)pipelineStageWithName:(id)arg1 priority:(unsigned int)arg2;
+ (id)pipelineStageWithName:(id)arg1 priority:(unsigned int)arg2 discardsLateSampleData:(bool)arg3;
+ (id)pipelineStageWithName:(id)arg1 priority:(unsigned int)arg2 workgroup:(id)arg3;
+ (id)pipelineStageWithName:(id)arg1 priority:(unsigned int)arg2 workgroup:(id)arg3 discardsLateSampleData:(bool)arg4;

- (void)dealloc;
- (id)description;
- (id)name;
- (unsigned int)priority;
- (id)queue;
- (void)sendMessage:(id)arg1 toInput:(id)arg2;
- (void)sendMessagesToInput:(id)arg1 messageProvider:(id /* block */)arg2;
- (bool)stillImagePipelineStage;

@end
