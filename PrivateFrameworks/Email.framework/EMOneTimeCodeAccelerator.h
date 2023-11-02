
@interface EMOneTimeCodeAccelerator : NSObject <EMOneTimeCodeObserver_xpc> {
    <EFCancelable> * _cancelable;
    EMDaemonInterface * _daemonInterface;
    NSObject<OS_dispatch_queue> * _oneTimeCodeQueue;
    id /* block */  _updateBlock;
}

@property (retain) <EFCancelable> *cancelable;
@property (nonatomic, retain) EMDaemonInterface *daemonInterface;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *oneTimeCodeQueue;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ updateBlock;

+ (id)log;

- (void).cxx_destruct;
- (id)cancelable;
- (id)daemonInterface;
- (void)dealloc;
- (void)deleteOneTimeCodeEmails:(long long)arg1;
- (void)didEnterOneTimeCodeField;
- (void)didExitOneTimeCodeField;
- (void)didFillOneTimeCode:(long long)arg1;
- (void)didReceiveOneTimeCode:(id)arg1 timestamp:(id)arg2 messageID:(long long)arg3 subject:(id)arg4 senders:(id)arg5 observers:(unsigned long long)arg6;
- (id)initWithDaemonInterface:(id)arg1 updateBlock:(id /* block */)arg2;
- (id)initWithUpdateBlock:(id /* block */)arg1;
- (id)oneTimeCodeQueue;
- (void)setCancelable:(id)arg1;
- (void)setDaemonInterface:(id)arg1;
- (void)setUpdateBlock:(id /* block */)arg1;
- (void)startObservingOneTimeCode;
- (id /* block */)updateBlock;

@end
