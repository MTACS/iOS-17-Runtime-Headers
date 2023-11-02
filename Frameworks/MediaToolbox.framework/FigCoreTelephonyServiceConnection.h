
@interface FigCoreTelephonyServiceConnection : NSObject <CoreTelephonyClientDataDelegate> {
    struct __CFAllocator { } * _allocator;
    struct FigCoreTelephonyMonitorListHead { 
        struct FigCoreTelephonyMonitorCallbackEntry {} *stqh_first; 
        struct FigCoreTelephonyMonitorCallbackEntry {} **stqh_last; 
    }  _callbackEntries;
    CoreTelephonyClient * _ctClient;
    CTDataStatusBasic * _ctDataStatus;
    struct __CTServerConnection { } * _ctServerConnection;
    struct OpaqueFigCoreTelephonyStatus { 
        unsigned char hasHighSpeedHighPower; 
    }  _currentStatus;
    NSObject<OS_dispatch_source> * _doomTimer;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) struct OpaqueFigCoreTelephonyStatus { unsigned char x1; } currentStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void)_handleCTNotification:(struct __CFString { }*)arg1 notificationInfo:(struct __CFDictionary { }*)arg2;
- (void)_setupConnection;
- (void)_teardownConnection;
- (struct OpaqueFigCoreTelephonyStatus { unsigned char x1; })currentStatus;
- (void)dealloc;
- (void)deregisterListener:(void*)arg1;
- (id)init;
- (void)internetDataStatusBasic:(id)arg1;
- (void)processDataStatusBasic:(id)arg1;
- (int)registerListener:(void*)arg1 callback:(int (*)arg2 queue:(id)arg3;

@end
