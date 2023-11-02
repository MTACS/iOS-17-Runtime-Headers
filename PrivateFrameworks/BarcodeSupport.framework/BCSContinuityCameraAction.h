
@interface BCSContinuityCameraAction : BCSAction {
    bool  _connecting;
    RPRemoteDisplaySession * _remoteDisplaySession;
    NSObject<OS_dispatch_queue> * _remoteDisplaySessionQueue;
}

@property (getter=isConnecting, nonatomic) bool connecting;

- (void).cxx_destruct;
- (id)actionIcon;
- (id)actionPickerItems;
- (id)initWithData:(id)arg1 codePayload:(id)arg2;
- (bool)isConnecting;
- (bool)isContinuityCameraAction;
- (id)localizedDefaultActionDescription;
- (void)performDefaultAction;
- (void)performDefaultActionWithCompletionHandler:(id /* block */)arg1;
- (void)setConnecting:(bool)arg1;
- (id)shortDescription;

@end
