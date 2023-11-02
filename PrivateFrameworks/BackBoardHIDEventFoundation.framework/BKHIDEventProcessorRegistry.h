
@interface BKHIDEventProcessorRegistry : NSObject <BKHIDEventProcessorRegistering> {
    NSMutableDictionary * _eventProcessorsByClassName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addEventProcessor:(id)arg1;
- (id)eventProcessorOfClass:(Class)arg1;
- (id)init;

@end
