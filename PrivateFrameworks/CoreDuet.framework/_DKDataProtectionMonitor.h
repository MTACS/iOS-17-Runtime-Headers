
@interface _DKDataProtectionMonitor : NSObject {
    NSMutableDictionary * _availableState;
    bool  _deviceFormatedForContentProtection;
    NSMutableDictionary * _handlers;
    bool  _notifyEnabled;
    NSObject<OS_dispatch_queue> * _notifyQueue;
    int  _notifyToken;
    NSObject<OS_dispatch_queue> * _stateQueue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
