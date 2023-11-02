
@interface OSLaunchdJobInfo : NSObject {
    NSObject<OS_xpc_object> * _additionalPropertiesDictionary;
    NSUUID * _instance;
    OSLaunchdJobExitStatus * _lastExitStatus;
    int  _lastSpawnError;
    int  _pid;
    bool  _removing;
    long long  _state;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *additionalPropertiesDictionary;
@property (nonatomic, readonly) NSUUID *instance;
@property (nonatomic, readonly) OSLaunchdJobExitStatus *lastExitStatus;
@property (nonatomic, readonly) int lastSpawnError;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) bool removing;
@property (nonatomic, readonly) long long state;

- (void).cxx_destruct;
- (id)additionalPropertiesDictionary;
- (id)description;
- (id)initWithState:(long long)arg1 pid:(int)arg2 lastSpawnError:(int)arg3 lastExitStatus:(id)arg4 additionalPropertiesDict:(id)arg5 removing:(bool)arg6 instance:(id)arg7;
- (id)instance;
- (id)lastExitStatus;
- (int)lastSpawnError;
- (int)pid;
- (bool)removing;
- (long long)state;

@end
