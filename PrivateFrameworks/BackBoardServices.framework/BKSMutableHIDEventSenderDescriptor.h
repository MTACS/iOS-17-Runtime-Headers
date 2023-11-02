
@interface BKSMutableHIDEventSenderDescriptor : BKSHIDEventSenderDescriptor

@property (nonatomic, copy) BKSHIDEventDisplay *associatedDisplay;
@property (getter=isAuthenticated, nonatomic) bool authenticated;
@property (nonatomic) long long hardwareType;
@property (nonatomic) unsigned long long senderID;

+ (id)new;

- (id)init;
- (void)setAssociatedDisplay:(id)arg1;
- (void)setAuthenticated:(bool)arg1;
- (void)setHardwareType:(long long)arg1;
- (void)setPrimaryPage:(unsigned int)arg1 primaryUsage:(unsigned int)arg2;
- (void)setSenderID:(unsigned long long)arg1;

@end
