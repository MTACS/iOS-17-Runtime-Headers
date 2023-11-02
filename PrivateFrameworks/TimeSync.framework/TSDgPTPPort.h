
@interface TSDgPTPPort : NSObject {
    unsigned long long  _clockIdentifier;
    IODConnection * _connection;
    IOKInterestNotification * _generalInterestNotification;
    IOKNotificationPort * _notificationPort;
    unsigned short  _portNumber;
    int  _portRole;
    NSObject<OS_dispatch_queue> * _propertyUpdateQueue;
    IOKService * _service;
    bool  _updatePropertiesOnPropertyChange;
    TSDXgPTPPort * _xpcPort;
}

@property (nonatomic) unsigned long long clockIdentifier;
@property (nonatomic, readonly) IODConnection *connection;
@property (nonatomic) unsigned short portNumber;
@property (nonatomic) int portRole;
@property (nonatomic, readonly) int portType;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyUpdateQueue;
@property (nonatomic, readonly) IOKService *service;
@property (nonatomic) TSDXgPTPPort *xpcPort;

+ (id)diagnosticInfoForClockIdentifier:(unsigned long long)arg1 andPortNumber:(unsigned short)arg2;
+ (id)diagnosticInfoForService:(id)arg1;
+ (id)gPTPPortWithClockIdentifier:(unsigned long long)arg1 portNumber:(unsigned short)arg2;
+ (id)gPTPPortWithService:(id)arg1;
+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)arg1 andPortNumber:(unsigned short)arg2;
+ (id)iokitMatchingDictionaryForPortClass:(id)arg1 clockIdentifier:(unsigned long long)arg2 andPortNumber:(unsigned short)arg3;

- (void).cxx_destruct;
- (unsigned long long)_clockIdentifier;
- (unsigned short)_portNumber;
- (int)_portRole;
- (unsigned long long)clockIdentifier;
- (id)connection;
- (void)finalizeNotifications;
- (id)init;
- (id)initWithService:(id)arg1;
- (id)initWithService:(id)arg1 pid:(int)arg2;
- (unsigned short)portNumber;
- (int)portRole;
- (int)portType;
- (id)propertiesForXPC;
- (id)propertyUpdateQueue;
- (id)service;
- (void)serviceTerminated;
- (void)setClockIdentifier:(unsigned long long)arg1;
- (void)setPortNumber:(unsigned short)arg1;
- (void)setPortRole:(int)arg1;
- (void)setPropertyUpdateQueue:(id)arg1;
- (void)setXpcPort:(id)arg1;
- (bool)startAutomaticPropertyUpdates;
- (bool)stopAutomaticPropertyUpdates;
- (void)updateProperties;
- (id)xpcPort;

@end
