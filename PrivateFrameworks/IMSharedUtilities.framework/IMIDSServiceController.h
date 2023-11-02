
@interface IMIDSServiceController : NSObject {
    NSString * _debuggingService;
}

@property (nonatomic, retain) NSString *debuggingService;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)debuggingService;
- (id)init;
- (void)logIfDebuggingService:(id)arg1 method:(const char *)arg2;
- (void)setDebuggingService:(id)arg1;

@end
