
@interface BKHIDAccessibilitySender : NSObject <BKHIDEventSenderInfo> {
    bool  _authenticated;
    bool  _builtIn;
    NSString * _displayUUID;
    int  _eventSource;
    unsigned int  _primaryUsage;
    unsigned int  _primaryUsagePage;
    BKSHIDEventSenderDescriptor * _senderDescriptor;
    unsigned long long  _senderID;
}

@property (getter=isAuthenticated, nonatomic) bool authenticated;
@property (getter=isBuiltIn, nonatomic) bool builtIn;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayUUID;
@property (nonatomic) int eventSource;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isPencilDigitizer;
@property (nonatomic) unsigned int primaryUsage;
@property (nonatomic) unsigned int primaryUsagePage;
@property (nonatomic, copy) BKSHIDEventSenderDescriptor *senderDescriptor;
@property (nonatomic) unsigned long long senderID;
@property (readonly) Class superclass;

+ (id)accessibilityHIDServices;

- (void).cxx_destruct;
- (id)displayUUID;
- (int)eventSource;
- (id)initWithSenderID:(unsigned long long)arg1;
- (bool)isAuthenticated;
- (bool)isBuiltIn;
- (bool)isPencilDigitizer;
- (unsigned int)primaryUsage;
- (unsigned int)primaryUsagePage;
- (id)senderDescriptor;
- (id)senderDescriptorForEventType:(unsigned int)arg1;
- (unsigned long long)senderID;
- (void)setAuthenticated:(bool)arg1;
- (void)setBuiltIn:(bool)arg1;
- (void)setDisplayUUID:(id)arg1;
- (void)setEventSource:(int)arg1;
- (void)setPrimaryUsage:(unsigned int)arg1;
- (void)setPrimaryUsagePage:(unsigned int)arg1;
- (void)setSenderDescriptor:(id)arg1;
- (void)setSenderID:(unsigned long long)arg1;

@end
