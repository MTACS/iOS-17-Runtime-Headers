
@interface RCPVirtualHIDService : NSObject <HIDVirtualEventServiceDelegate, RCPEventDeliveryService> {
    NSMutableDictionary * _dynamicMetaProperties;
    HIDVirtualEventService * _eventService;
    NSString * _identifier;
    bool  _isOpen;
    RCPEventSenderProperties * _properties;
    NSDictionary * _propertyDictionary;
    bool  _readyForPointerEvents;
    NSObject<OS_dispatch_group> * _waitForEventSystemGroup;
    NSObject<OS_dispatch_group> * _waitForPointerReadyGroup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *dynamicMetaProperties;
@property (nonatomic, retain) HIDVirtualEventService *eventService;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool isOpen;
@property (nonatomic, readonly) bool isRunning;
@property (retain) RCPEventSenderProperties *properties;
@property (nonatomic, retain) NSDictionary *propertyDictionary;
@property (nonatomic) bool readyForPointerEvents;
@property (readonly) Class superclass;

+ (id)serviceWithIdentifier:(id)arg1 properties:(id)arg2;

- (void).cxx_destruct;
- (id)copyEventMatching:(id)arg1 forService:(id)arg2;
- (id)description;
- (id)dynamicMetaProperties;
- (id)eventService;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 properties:(id)arg2;
- (bool)isOpen;
- (bool)isRunning;
- (void)notification:(long long)arg1 withProperty:(id)arg2 forService:(id)arg3;
- (void)postHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (id)properties;
- (id)propertyDictionary;
- (id)propertyForKey:(id)arg1 forService:(id)arg2;
- (bool)readyForPointerEvents;
- (void)setDynamicMetaProperties:(id)arg1;
- (void)setEventService:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsOpen:(bool)arg1;
- (bool)setOutputEvent:(id)arg1 forService:(id)arg2;
- (void)setProperties:(id)arg1;
- (bool)setProperty:(id)arg1 forKey:(id)arg2 forService:(id)arg3;
- (void)setPropertyDictionary:(id)arg1;
- (void)setReadyForPointerEvents:(bool)arg1;
- (bool)startWithError:(id*)arg1;
- (void)stop;

@end
