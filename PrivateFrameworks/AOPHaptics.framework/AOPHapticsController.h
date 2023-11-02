
@interface AOPHapticsController : NSObject {
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _activated;
    unsigned int  _arrivalNotification;
    id /* block */  _cancelHandler;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _cancelled;
    unsigned int  _connect;
    struct IONotificationPort { } * _notificationPort;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _readyHandler;
    unsigned int  _service;
}

@property (nonatomic) unsigned int connect;
@property (nonatomic) unsigned int service;

+ (int)AHtoHMOutputType:(unsigned char)arg1;

- (void)_findService;
- (void)activate;
- (void)cancel;
- (unsigned int)connect;
- (void)dealloc;
- (id)init;
- (bool)playSlotIndices:(id)arg1 error:(id*)arg2;
- (unsigned int)service;
- (void)setCancelHandler:(id /* block */)arg1;
- (void)setConnect:(unsigned int)arg1;
- (void)setDispatchQueue:(id)arg1;
- (bool)setMappings:(id)arg1 error:(id*)arg2;
- (void)setReadyHandler:(id /* block */)arg1;
- (void)setService:(unsigned int)arg1;
- (void)signalReady;

@end
