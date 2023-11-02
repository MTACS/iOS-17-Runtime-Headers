
@interface LASSProperties4RB : NSObject {
    NSObject<OS_xpc_object> * _additionalProperties;
    bool  _enablePressuredExit;
    bool  _enableTransactions;
    NSObject<OS_xpc_object> * _endpoints;
    NSUUID * _instance;
    bool  _keepAlive;
    NSString * _label;
    unsigned int  _processType;
    NSString * _program;
    int  _requestedJetsamPriority;
    bool  _runAtLoad;
    long long  _serviceType;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *additionalProperties;
@property (nonatomic, readonly) bool enablePressuredExit;
@property (nonatomic, readonly) bool enableTransactions;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *endpoints;
@property (nonatomic, readonly) NSUUID *instance;
@property (nonatomic, readonly) bool keepAlive;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) unsigned int processType;
@property (nonatomic, readonly) NSString *program;
@property (nonatomic, readonly) int requestedJetsamPriority;
@property (nonatomic, readonly) bool runAtLoad;
@property (nonatomic, readonly) long long serviceType;

+ (id)_propertiesFromAttrs:(id)arg1;
+ (id)propertiesForJob:(id)arg1 error:(id*)arg2;
+ (id)propertiesForPid:(int)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)additionalProperties;
- (bool)enablePressuredExit;
- (bool)enableTransactions;
- (id)endpoints;
- (id)initWithLabel:(id)arg1 instance:(id)arg2 requestedJetsamPriority:(int)arg3 additionalProperties:(id)arg4 program:(id)arg5 processType:(unsigned int)arg6 keepAlive:(bool)arg7 runAtLoad:(bool)arg8 enableTransactions:(bool)arg9 endpoints:(id)arg10 serviceType:(long long)arg11;
- (id)instance;
- (bool)keepAlive;
- (id)label;
- (unsigned int)processType;
- (id)program;
- (int)requestedJetsamPriority;
- (bool)runAtLoad;
- (long long)serviceType;

@end
