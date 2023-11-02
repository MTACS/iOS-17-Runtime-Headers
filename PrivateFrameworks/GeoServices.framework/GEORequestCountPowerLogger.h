
@interface GEORequestCountPowerLogger : NSObject {
    GEOXPCActivity * _activity;
    NSMutableDictionary * _clientInfo;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _didRead;
    bool  _isDirty;
    geo_isolater * _isolater;
    NSDate * _startDate;
    NSObject<OS_dispatch_source> * _writeTimer;
}

+ (void)registerXPCActivity;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_terminationRequested:(id)arg1;
- (void)dealloc;
- (void)incrementCountForClient:(id)arg1 requestType:(int)arg2;
- (id)init;

@end
