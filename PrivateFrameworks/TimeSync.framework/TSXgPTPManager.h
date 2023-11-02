
@interface TSXgPTPManager : TSXClient <TSXgPTPManagerClientProtocol> {
    TSgPTPManager * _gPTPManager;
}

@property (nonatomic, readonly) unsigned long long airPlayPTPInstanceClockIdentifier;
@property (nonatomic, readonly) unsigned long long avbPTPInstance0ClockIdentifier;
@property (nonatomic, readonly) unsigned long long avbPTPInstance1ClockIdentifier;
@property (nonatomic, readonly) unsigned long long avbPTPInstance2ClockIdentifier;
@property (nonatomic, readonly) unsigned long long avbPTPInstance3ClockIdentifier;
@property (nonatomic, readonly) unsigned long long copresencePTPInstanceClockIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long systemDomainClockIdentifier;

+ (void)_setIsAvailable;
+ (void)_setIsUnavailable;
+ (id)clientProtocol;
+ (void)initialize;
+ (id)serverProtocol;
+ (id)serviceName;

- (void).cxx_destruct;
- (bool)addAVBPTPInstanceIndex:(unsigned short)arg1 identifier:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)addAirPlayPTPInstance:(unsigned long long*)arg1 error:(id*)arg2;
- (bool)addCopresencePTPInstance:(unsigned long long*)arg1 error:(id*)arg2;
- (bool)addPTPInstance:(unsigned long long*)arg1 error:(id*)arg2;
- (bool)addTimeOfDayPTPInstance:(unsigned long long*)arg1 error:(id*)arg2;
- (unsigned long long)airPlayPTPInstanceClockIdentifier;
- (unsigned long long)avbPTPInstance0ClockIdentifier;
- (unsigned long long)avbPTPInstance1ClockIdentifier;
- (unsigned long long)avbPTPInstance2ClockIdentifier;
- (unsigned long long)avbPTPInstance3ClockIdentifier;
- (unsigned long long)copresencePTPInstanceClockIdentifier;
- (id)exportedObject;
- (id)initWithgPTPManager:(id)arg1;
- (void)interruptedConnection;
- (bool)removeAVBPTPInstanceWithIndex:(unsigned short)arg1 error:(id*)arg2;
- (bool)removeAirPlayPTPInstanceWithError:(id*)arg1;
- (bool)removeCopresencePTPInstanceWithError:(id*)arg1;
- (bool)removePTPInstanceWithIdentifier:(unsigned long long)arg1 error:(id*)arg2;
- (unsigned long long)systemDomainClockIdentifier;

@end
