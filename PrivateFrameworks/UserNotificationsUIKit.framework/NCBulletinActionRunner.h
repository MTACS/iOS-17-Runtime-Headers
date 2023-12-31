
@interface NCBulletinActionRunner : NSObject <NCNotificationActionRunner> {
    BBAction * _action;
    BBBulletin * _bulletin;
    BBObserver * _observer;
    bool  _responseWasSent;
    bool  _shouldForwardAction;
}

@property (nonatomic, readonly) BBAction *action;
@property (nonatomic, readonly) BBBulletin *bulletin;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BBObserver *observer;
@property (nonatomic) bool responseWasSent;
@property (nonatomic) bool shouldForwardAction;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)action;
- (id)bulletin;
- (void)executeAction:(id)arg1 fromOrigin:(id)arg2 endpoint:(id)arg3 withParameters:(id)arg4 completion:(id /* block */)arg5;
- (id)initWithAction:(id)arg1 bulletin:(id)arg2 observer:(id)arg3;
- (id)observer;
- (bool)responseWasSent;
- (void)setResponseWasSent:(bool)arg1;
- (void)setShouldForwardAction:(bool)arg1;
- (bool)shouldForwardAction;

@end
