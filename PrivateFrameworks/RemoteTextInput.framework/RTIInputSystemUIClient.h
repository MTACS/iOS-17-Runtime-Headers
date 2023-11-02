
@interface RTIInputSystemUIClient : RTIInputSystemClient

+ (id)_serviceName;

- (bool)_canResumeConnection;
- (void)_initializeConnectionWithMachName:(id)arg1;
- (id)initWithUIHostMachName:(id)arg1;

@end
