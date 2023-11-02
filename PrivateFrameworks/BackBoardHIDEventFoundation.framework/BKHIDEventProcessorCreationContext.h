
@interface BKHIDEventProcessorCreationContext : NSObject {
    <BKHIDEventDispatcher> * _eventDispatcher;
    <BKHIDEventProcessorRegistering> * _eventProcessorRegistry;
    <BKIOHIDServiceMatcherDataProviding> * _serviceMatcherDataProvider;
    <BKHIDSystemInterfacing> * _systemInterface;
}

@property (nonatomic, retain) <BKHIDEventDispatcher> *eventDispatcher;
@property (nonatomic, retain) <BKHIDEventProcessorRegistering> *eventProcessorRegistry;
@property (nonatomic, retain) <BKIOHIDServiceMatcherDataProviding> *serviceMatcherDataProvider;
@property (nonatomic, retain) <BKHIDSystemInterfacing> *systemInterface;

- (void).cxx_destruct;
- (id)eventDispatcher;
- (id)eventProcessorRegistry;
- (id)serviceMatcherDataProvider;
- (void)setEventDispatcher:(id)arg1;
- (void)setEventProcessorRegistry:(id)arg1;
- (void)setServiceMatcherDataProvider:(id)arg1;
- (void)setSystemInterface:(id)arg1;
- (id)systemInterface;

@end
