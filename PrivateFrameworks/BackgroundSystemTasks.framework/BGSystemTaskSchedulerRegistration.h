
@interface BGSystemTaskSchedulerRegistration : NSObject {
    NSObject<OS_xpc_object> * _descriptor;
    NSObject<OS_dispatch_queue> * _expirationQueue;
    NSString * _identifier;
    id /* block */  _launchHandler;
    NSObject<OS_dispatch_queue> * _launchQueue;
    BGSystemTaskRequest * _taskRequest;
}

@property (nonatomic, retain) NSObject<OS_xpc_object> *descriptor;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *expirationQueue;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, copy) id /* block */ launchHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *launchQueue;
@property (nonatomic, retain) BGSystemTaskRequest *taskRequest;

- (void).cxx_destruct;
- (id)descriptor;
- (id)expirationQueue;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 launchQueue:(id)arg2 launchHandler:(id /* block */)arg3;
- (id /* block */)launchHandler;
- (id)launchQueue;
- (void)setDescriptor:(id)arg1;
- (void)setExpirationQueue:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLaunchHandler:(id /* block */)arg1;
- (void)setLaunchQueue:(id)arg1;
- (void)setTaskRequest:(id)arg1;
- (id)taskRequest;

@end
