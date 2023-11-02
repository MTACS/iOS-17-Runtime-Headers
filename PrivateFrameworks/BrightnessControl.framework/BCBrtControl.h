
@interface BCBrtControl : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSMutableDictionary * _capabilities;
    struct __CFUUID { } * _cfContainerID;
    NSUUID * _containerID;
    id /* block */  _displayInvalidHandler;
    unsigned int  _displayService;
    NSString * _id;
    bool  _isValid;
    NSObject<OS_os_log> * _logHandle;
    double  _maxNits;
    double  _midNits;
    double  _minNits;
    bool  _multipleControlEnabled;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) id ID;
@property (retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly) NSDictionary *capabilities;
@property (readonly) struct __CFUUID { }*cfContainerID;
@property (readonly) NSUUID *containerID;
@property (copy) id /* block */ displayInvalidHandler;
@property (readonly) unsigned long long hash;
@property (readonly) bool isValid;
@property (readonly) NSObject<OS_os_log> *logHandle;
@property (readonly) double maxNits;
@property (readonly) double minNits;
@property bool multipleControlEnabled;
@property (readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)copyAllAvailableControls;
+ (id)copyAvailableControls;
+ (id)newMonitorForAllControlsWithHandler:(id /* block */)arg1 error:(id*)arg2;
+ (id)newMonitorWithHandler:(id /* block */)arg1 error:(id*)arg2;

- (id)ID;
- (bool)_checkIsValid:(id*)arg1;
- (void)_runOnCallbackQueue:(id /* block */)arg1;
- (id)callbackQueue;
- (id)capabilities;
- (struct __CFUUID { }*)cfContainerID;
- (id)containerID;
- (id)copyModuleIdentifier;
- (id)copyProperty:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id /* block */)displayInvalidHandler;
- (double)getNitsWithError:(id*)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (id)logHandle;
- (double)maxNits;
- (double)minNits;
- (bool)multipleControlEnabled;
- (id)queue;
- (void)setCallbackQueue:(id)arg1;
- (void)setDisplayInvalidHandler:(id /* block */)arg1;
- (void)setDisplayService:(unsigned int)arg1;
- (void)setMultipleControlEnabled:(bool)arg1;
- (bool)setNits:(double)arg1 error:(id*)arg2;
- (void)setNitsAsync:(double)arg1 completionHandler:(id /* block */)arg2;
- (bool)setProperty:(id)arg1 value:(id)arg2 error:(id*)arg3;
- (void)setPropertyAync:(id)arg1 value:(id)arg2 completionHandler:(id /* block */)arg3;

@end
