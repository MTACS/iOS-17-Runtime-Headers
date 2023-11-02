
@interface IDSPushHandlerContext : NSObject {
    NSSet * _commands;
    NSSet * _nonWakingTopics;
    NSSet * _opportunisticTopics;
    NSObject<OS_dispatch_queue> * _queue;
    NSSet * _topics;
    NSSet * _wakingTopics;
}

@property (nonatomic, copy) NSSet *commands;
@property (nonatomic, retain) NSSet *nonWakingTopics;
@property (nonatomic, retain) NSSet *opportunisticTopics;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSSet *wakingTopics;

- (void).cxx_destruct;
- (id)commands;
- (id)initWithQueue:(id)arg1 wakingTopics:(id)arg2 opportunisticTopics:(id)arg3 nonWakingTopics:(id)arg4 commands:(id)arg5;
- (id)nonWakingTopics;
- (id)opportunisticTopics;
- (id)queue;
- (void)setCommands:(id)arg1;
- (void)setNonWakingTopics:(id)arg1;
- (void)setOpportunisticTopics:(id)arg1;
- (void)setWakingTopics:(id)arg1;
- (id)wakingTopics;

@end
