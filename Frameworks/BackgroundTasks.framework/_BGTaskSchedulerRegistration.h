
@interface _BGTaskSchedulerRegistration : NSObject {
    NSString * _identifier;
    id /* block */  _launchHandler;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, copy) id /* block */ launchHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 queue:(id)arg2 launchHandler:(id /* block */)arg3;
- (id /* block */)launchHandler;
- (id)queue;
- (void)setIdentifier:(id)arg1;
- (void)setLaunchHandler:(id /* block */)arg1;
- (void)setQueue:(id)arg1;

@end
