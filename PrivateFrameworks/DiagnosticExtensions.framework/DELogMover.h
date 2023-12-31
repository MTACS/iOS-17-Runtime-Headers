
@interface DELogMover : NSObject {
    NSObject<OS_xpc_object> * _conn;
    NSString * _serviceName;
}

@property (nonatomic, readonly) NSString *serviceName;

+ (void)moveSystemLogsWithExtensions:(id)arg1;

- (void).cxx_destruct;
- (id)initWithServiceName:(id)arg1;
- (bool)sendRequestReturningBooleanResponse:(id)arg1 withSuccessKey:(char *)arg2;
- (id)serviceName;

@end
