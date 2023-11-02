
@protocol BKHIDEventSenderInfo <NSObject>

@required

- (NSString *)displayUUID;
- (int)eventSource;
- (bool)isAuthenticated;
- (bool)isBuiltIn;
- (unsigned int)primaryUsage;
- (unsigned int)primaryUsagePage;
- (BKSHIDEventSenderDescriptor *)senderDescriptor;
- (BKSHIDEventSenderDescriptor *)senderDescriptorForEventType:(unsigned int)arg1;
- (unsigned long long)senderID;

@end
