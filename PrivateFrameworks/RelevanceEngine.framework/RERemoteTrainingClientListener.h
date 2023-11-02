
@interface RERemoteTrainingClientListener : NSObject <NSXPCListenerDelegate> {
    NSMutableSet * _clients;
    <RERemoteTrainingClientListenerDelegate> * _delegate;
    NSXPCListener * _listener;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RERemoteTrainingClientListenerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedTrainingClientListener;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
