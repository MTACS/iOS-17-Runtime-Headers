
@protocol BKHIDEventProcessorRegistering <NSObject>

@required

- (void)addEventProcessor:(id <BKHIDEventProcessor>)arg1;
- (<BKHIDEventProcessor> *)eventProcessorOfClass:(Class)arg1;

@end
