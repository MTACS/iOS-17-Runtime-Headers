
@interface AXPIFingerEventSender : NSObject <HIDVirtualEventServiceDelegate> {
    NSString * _displayUUID;
    long long  _eventGenerationCount;
    NSObject<OS_dispatch_queue> * _eventSendingQueue;
    HIDVirtualEventService * _eventService;
    NSDictionary * _properties;
    unsigned long long  _senderID;
    bool  _shouldAddRealEventFlag;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *displayUUID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *eventSendingQueue;
@property (nonatomic, retain) HIDVirtualEventService *eventService;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *properties;
@property (nonatomic) unsigned long long senderID;
@property (nonatomic) bool shouldAddRealEventFlag;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_assignFingerIdentifiersToTouches:(id)arg1;
- (void)_sendHandEvent:(unsigned int)arg1 touchesByFingerIdentifier:(id)arg2;
- (id)copyEventMatching:(id)arg1 forService:(id)arg2;
- (void)dealloc;
- (id)displayUUID;
- (id)eventSendingQueue;
- (id)eventService;
- (id)init;
- (id)initWithDisplayUUID:(id)arg1;
- (void)notification:(long long)arg1 withProperty:(id)arg2 forService:(id)arg3;
- (void)performCancel;
- (void)performDownWithTouches:(id)arg1;
- (void)performDownWithTouchesByFingerIdentifier:(id)arg1;
- (void)performMoveWithTouches:(id)arg1;
- (void)performMoveWithTouchesByFingerIdentifier:(id)arg1;
- (void)performUpWithTouches:(id)arg1;
- (void)performUpWithTouchesByFingerIdentifier:(id)arg1;
- (id)properties;
- (id)propertyForKey:(id)arg1 forService:(id)arg2;
- (unsigned long long)senderID;
- (void)setDisplayUUID:(id)arg1;
- (void)setEventSendingQueue:(id)arg1;
- (void)setEventService:(id)arg1;
- (bool)setOutputEvent:(id)arg1 forService:(id)arg2;
- (void)setProperties:(id)arg1;
- (bool)setProperty:(id)arg1 forKey:(id)arg2 forService:(id)arg3;
- (void)setSenderID:(unsigned long long)arg1;
- (void)setShouldAddRealEventFlag:(bool)arg1;
- (bool)shouldAddRealEventFlag;
- (void)startNewGeneration;

@end
