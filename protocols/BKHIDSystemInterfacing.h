
@protocol BKHIDSystemInterfacing <BKIOHIDServiceMatcherDataProviding>

@required

- (BKHIDClientConnectionManager *)clientConnectionManager;
- (BKHIDEventDeliveryManager *)deliveryManager;
- (void)injectGSEvent:(struct __GSEvent { }*)arg1;
- (void)injectHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (BKHIDEventSenderCache *)senderCache;
- (void)setSystemProperty:(id)arg1 forKey:(NSString *)arg2;
- (struct __IOHIDEvent { }*)systemEventOfType:(unsigned int)arg1 matchingEvent:(struct __IOHIDEvent { }*)arg2 options:(unsigned int)arg3;
- (id)systemPropertyForKey:(NSString *)arg1;

@end
