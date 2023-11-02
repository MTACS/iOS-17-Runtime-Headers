
@interface XAMObserver : NSObject {
    NSString * _changeNotificationName;
    NSMutableDictionary * _handlers;
    bool  _hasReceivedAutomationModeEnabledState;
    bool  _isAutomationModeEnabled;
    int  _observationToken;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _readerConnectionFactory;
}

@property (readonly) bool automationModeRequiresAuthentication;
@property (readonly) NSString *changeNotificationName;
@property (readonly) bool isAutomationModeEnabled;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) id /* block */ readerConnectionFactory;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_listenForAutomationModeChangeNotifications;
- (void)_notifyHandlers;
- (bool)automationModeRequiresAuthentication;
- (id)changeNotificationName;
- (bool)currentAutomationModeEnabledStateFromDaemon;
- (void)dealloc;
- (id)initWithChangeNotificationName:(id)arg1 readerConnectionFactory:(id /* block */)arg2;
- (bool)isAutomationModeEnabled;
- (id)queue;
- (id /* block */)readerConnectionFactory;
- (id)registerAutomationModeChangeHandlerOnQueue:(id)arg1 withBlock:(id /* block */)arg2;
- (void)unregisterAutomationModeChangeHandler:(id)arg1;

@end
