
@interface SPUIAppService : NSObject {
    bool  _activated;
    SPXPCConnection * _appConnection;
    NSObject<OS_dispatch_queue> * _appServiceQueue;
    int  _awakeNotifyToken;
    SPXPCConnection * _backgroundConnection;
}

+ (void)initialize;
+ (id)sharedAppService;

- (void).cxx_destruct;
- (void)_cancelAwakeNotifyToken;
- (void)activate;
- (void)deactivate;
- (id)init;
- (void)registerAwakeNotifyToken;

@end
