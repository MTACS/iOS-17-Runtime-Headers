
@interface SVXServiceCommandHandlerUIDelayedActionCancelCommand : NSObject <SVXServiceCommandHandling> {
    SVXServiceCommandDelayedActionStore * _delayedActionStore;
    NSString * _identifier;
    <SVXPerforming> * _performer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;

+ (Class)supportedCommandClass;

- (void).cxx_destruct;
- (void)handleCommand:(id)arg1 withContext:(id)arg2 taskTracker:(id)arg3 completion:(id /* block */)arg4;
- (id)identifier;
- (id)initWithDelayedActionStore:(id)arg1 performer:(id)arg2;
- (bool)isCommandUUFR:(id)arg1;

@end
