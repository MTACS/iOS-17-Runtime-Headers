
@interface DCXPCDisconnectHandler : NSObject {
    NSMutableDictionary * _disconnectBoolCallbacks;
    NSMutableDictionary * _disconnectCallbacks;
    long long  _disconnectErrorCode;
    NSString * _disconnectErrorDomain;
    NSMutableDictionary * _disconnectOptionCallbacks;
    NSMutableDictionary * _disconnectResultCallbacks;
    bool  _isDisconnected;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_os_log> * _logger;
    NSString * _name;
}

@property (nonatomic, retain) NSMutableDictionary *disconnectBoolCallbacks;
@property (nonatomic, retain) NSMutableDictionary *disconnectCallbacks;
@property (nonatomic) long long disconnectErrorCode;
@property (nonatomic, retain) NSString *disconnectErrorDomain;
@property (nonatomic, retain) NSMutableDictionary *disconnectOptionCallbacks;
@property (nonatomic, retain) NSMutableDictionary *disconnectResultCallbacks;
@property (nonatomic) bool isDisconnected;
@property (nonatomic, readonly) NSObject<OS_os_log> *logger;
@property (nonatomic, retain) NSString *name;

- (void).cxx_destruct;
- (void)configureHandlersForConnection:(id)arg1;
- (id)createDaemonDisconnectedError;
- (id)disconnectBoolCallbacks;
- (id)disconnectCallbacks;
- (long long)disconnectErrorCode;
- (id)disconnectErrorDomain;
- (id)disconnectOptionCallbacks;
- (id)disconnectResultCallbacks;
- (void)handleInterruption;
- (id)initWithName:(id)arg1 errorDomain:(id)arg2 errorCode:(long long)arg3 logger:(id)arg4;
- (bool)isDisconnected;
- (id)logger;
- (id)name;
- (id)randomCallbackIdentifier;
- (id)registerBoolResultCallback:(id /* block */)arg1;
- (id)registerCallback:(id /* block */)arg1;
- (id)registerOptionResultCallback:(id /* block */)arg1;
- (id)registerResultCallback:(id /* block */)arg1;
- (void)setDisconnectBoolCallbacks:(id)arg1;
- (void)setDisconnectCallbacks:(id)arg1;
- (void)setDisconnectErrorCode:(long long)arg1;
- (void)setDisconnectErrorDomain:(id)arg1;
- (void)setDisconnectOptionCallbacks:(id)arg1;
- (void)setDisconnectResultCallbacks:(id)arg1;
- (void)setIsDisconnected:(bool)arg1;
- (void)setName:(id)arg1;
- (void)unregisterBoolResultCallback:(id)arg1;
- (void)unregisterCallback:(id)arg1;
- (void)unregisterOptionResultCallback:(id)arg1;
- (void)unregisterResultCallback:(id)arg1;

@end
