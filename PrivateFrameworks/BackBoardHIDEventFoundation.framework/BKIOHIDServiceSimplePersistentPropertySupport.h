
@interface BKIOHIDServiceSimplePersistentPropertySupport : NSObject <BKIOHIDServiceMatchObserver, BKIOHIDServicePersistentPropertyHandling, BSInvalidatable> {
    BKIOHIDServiceMatcher * _matcher;
    BKIOHIDServicePersistentPropertyController * _persistentPropertyController;
    BKSHIDEventSenderDescriptor * _senderDescriptor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithSenderDescriptor:(id)arg1 matcherDataProvider:(id)arg2 persistentPropertyController:(id)arg3;
- (void)invalidate;
- (void)matcher:(id)arg1 servicesDidMatch:(id)arg2;
- (long long)setPersistentProperties:(id)arg1 forServicesMatchingDescriptor:(id)arg2;

@end
