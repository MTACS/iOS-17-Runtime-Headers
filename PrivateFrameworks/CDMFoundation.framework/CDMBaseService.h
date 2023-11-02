
@interface CDMBaseService : NSObject <CDMService> {
    CDMConfig * _config;
    NSHashTable * _observers;
    long long  _serviceState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *serviceName;
@property (nonatomic, readonly) long long serviceState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSSet *supportedCommands;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)createErrorWithCode:(long long)arg1 description:(id)arg2;
- (id)createSetupResponseCommand;
- (void)handleCommand:(id)arg1 withCallback:(id /* block */)arg2;
- (id)initWithConfig:(id)arg1;
- (void)publish:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)request:(id)arg1 withCallback:(id /* block */)arg2;
- (id)serviceName;
- (long long)serviceState;
- (id)supportedCommands;

@end
