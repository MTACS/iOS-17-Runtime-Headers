
@interface SUCoreXPCActivity : NSObject {
    NSString * _activityName;
    SUCoreActivityOptions * _activityOptions;
    id /* block */  _handler;
    bool  _isRegisteredWithXPC;
}

@property (nonatomic, retain) NSString *activityName;
@property (nonatomic, retain) SUCoreActivityOptions *activityOptions;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic) bool isRegisteredWithXPC;

- (void).cxx_destruct;
- (id)activityName;
- (id)activityOptions;
- (id)description;
- (id /* block */)handler;
- (id)init:(id)arg1 options:(id)arg2 handler:(id /* block */)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isRegisteredWithXPC;
- (void)setActivityName:(id)arg1;
- (void)setActivityOptions:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setIsRegisteredWithXPC:(bool)arg1;

@end
