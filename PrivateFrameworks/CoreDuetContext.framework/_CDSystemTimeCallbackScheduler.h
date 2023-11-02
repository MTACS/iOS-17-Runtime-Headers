
@interface _CDSystemTimeCallbackScheduler : NSObject {
    NSString * _eventNameRoot;
}

@property (nonatomic, readonly, copy) NSString *eventNameRoot;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleCallbackAtDate:(id)arg1;
- (id)eventNameRoot;
- (id)initWithEventNameRoot:(id)arg1;
- (void)scheduleCallbackAtDate:(id)arg1 identifier:(id)arg2 requiringDeviceWake:(bool)arg3;
- (void)unscheduleCallbackAtDate:(id)arg1 identifier:(id)arg2 requiringDeviceWake:(bool)arg3;

@end
