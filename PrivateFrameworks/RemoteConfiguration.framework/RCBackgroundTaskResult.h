
@interface RCBackgroundTaskResult : NSObject {
    NSDictionary * _configurationResourcesByRequestKey;
    NSError * _error;
    NSString * _taskIdentifier;
}

@property (nonatomic, retain) NSDictionary *configurationResourcesByRequestKey;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSString *taskIdentifier;

- (void).cxx_destruct;
- (id)configurationResourcesByRequestKey;
- (id)error;
- (id)initWithTaskIdentifier:(id)arg1 configurationResourcesByRequestKey:(id)arg2 error:(id)arg3;
- (void)setConfigurationResourcesByRequestKey:(id)arg1;
- (void)setError:(id)arg1;
- (void)setTaskIdentifier:(id)arg1;
- (id)taskIdentifier;

@end
