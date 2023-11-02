
@interface _LTDDaemon : NSObject <NSXPCListenerDelegate, _LTClientConnectionDelegate> {
    NSMutableArray * _connections;
    NSObject<OS_dispatch_queue> * _listenerQueue;
    _LTTranslationServer * _server;
    NSXPCListener * _textTranslationListener;
    NSXPCListener * _translationListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)buildDateWithError:(id*)arg1;
+ (void)initialize;
+ (id)realPathFor:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)_cacheDirectoryPath;
- (void)_enterSandbox;
- (void)_setupMemoryWarningListener;
- (void)clientConnectionClosed:(id)arg1;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)run;

@end
