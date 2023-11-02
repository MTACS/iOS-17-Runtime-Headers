
@interface CMContinuityCaptureTimeSyncClock : NSObject <TSClockClient> {
    NSString * _clockDeviceUID;
    unsigned long long  _clockIdentifier;
    unsigned long long  _grandMasterIdentifier;
    NSObject<OS_dispatch_source> * _heartBeatTimer;
    TSgPTPClock * _ptpClock;
}

@property (nonatomic, retain) NSString *clockDeviceUID;
@property (nonatomic) unsigned long long clockIdentifier;
@property (getter=isConnectedToPeer, nonatomic, readonly) bool connectedToPeer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long grandMasterIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (id)clockDeviceUID;
- (unsigned long long)clockIdentifier;
- (void)dealloc;
- (void)didBeginClockGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(id)arg3;
- (void)didChangeLockStateTo:(int)arg1 forClock:(id)arg2;
- (void)didEndClockGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(id)arg3;
- (unsigned long long)domainTimeForMachAbsoluteTime:(unsigned long long)arg1;
- (unsigned long long)grandMasterIdentifier;
- (id)initWithClock:(id)arg1;
- (id)initWithClockIdentifier:(unsigned long long)arg1;
- (bool)isConnectedToPeer;
- (unsigned long long)machAbsoluteTimeForDomainTime:(unsigned long long)arg1;
- (void)setClockDeviceUID:(id)arg1;
- (void)setClockIdentifier:(unsigned long long)arg1;
- (void)setGrandMasterIdentifier:(unsigned long long)arg1;
- (void)startEmittingHeartBeatSignposts;
- (void)stopEmittingHeartBeatSignposts;

@end
