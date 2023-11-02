
@interface NPKTargetDeviceAssertionManager : NSObject {
    NSMutableDictionary * _assertTypesUUIDsMap;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSMutableDictionary * _outstandingAssertionStatusUpdaters;
    IDSService * _transportationService;
}

@property (nonatomic, retain) NSMutableDictionary *assertTypesUUIDsMap;
@property (nonatomic, retain) NSMutableDictionary *outstandingAssertionStatusUpdaters;
@property (nonatomic, readonly) IDSService *transportationService;

- (void).cxx_destruct;
- (id)_IDSSendOptions;
- (void)_addOutstandingAssertionStatusUpdater:(id)arg1 withAssertType:(int)arg2;
- (id)_outstandingAssertionStatusUpdaterWithRequest:(id)arg1 assertionType:(unsigned long long)arg2 assertionUUID:(id)arg3;
- (id)_removeOutstandingAssertionStatusUpdaterWithUUID:(id)arg1;
- (id)_sendAssertionRequest:(id)arg1;
- (id)acquireAssertionOfType:(unsigned long long)arg1;
- (id)assertTypesUUIDsMap;
- (id)assertionsUUIDsOfType:(unsigned long long)arg1;
- (id)initWithTransportationService:(id)arg1;
- (void)invalidateAssertionWithUUID:(id)arg1;
- (id)outstandingAssertionStatusUpdaters;
- (void)setAssertTypesUUIDsMap:(id)arg1;
- (void)setOutstandingAssertionStatusUpdaters:(id)arg1;
- (id)transportationService;

@end
