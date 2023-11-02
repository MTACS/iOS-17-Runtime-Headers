
@interface RMConfigurationSubscriberEventStream : RMConfigurationSubscriberClient {
    NSArray * _configurationTypes;
    id  _eventStreamObserver;
    long long  _scope;
}

@property (nonatomic, readonly) NSArray *configurationTypes;
@property (nonatomic, retain) id eventStreamObserver;
@property (nonatomic, readonly) long long scope;

+ (id)_configuredConfigurationTypesWithScope:(long long)arg1;
+ (id)_eventDescriptorByNameForEventStreamNamed:(id)arg1;
+ (void)_setupEventHandlerWithScope:(long long)arg1;
+ (id)newConfigurationSubscriberEventStreamWithScope:(long long)arg1 applicators:(id)arg2 publisherClass:(Class)arg3;

- (void).cxx_destruct;
- (void)_fetchConfigurations:(id)arg1;
- (void)_handleEvent:(id)arg1;
- (void)_setupEventHandler;
- (id)configurationTypes;
- (void)dealloc;
- (id)eventStreamObserver;
- (id)initWithScope:(long long)arg1;
- (long long)scope;
- (void)setEventStreamObserver:(id)arg1;
- (void)start;

@end
