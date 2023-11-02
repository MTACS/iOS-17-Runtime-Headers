
@interface ACCBLEPairingProvider : NSObject {
    <ACCBLEPairingProviderProtocol> * _delegate;
    NSString * _delegateUUID;
}

@property (nonatomic) <ACCBLEPairingProviderProtocol> *delegate;
@property (nonatomic, retain) NSString *delegateUUID;
@property (nonatomic) int lastScorpiusDetectType;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)delegateUUID;
- (void)devicePairingData:(id)arg1 blePairingUUID:(id)arg2 pairType:(int)arg3 pairData:(id)arg4;
- (void)deviceStateUpdate:(id)arg1 blePairingUUID:(id)arg2 bRadioOn:(bool)arg3 pairState:(int)arg4 bPairModeOn:(bool)arg5;
- (void)deviceUpdatePairingInfo:(id)arg1 blePairingUUID:(id)arg2 pairType:(int)arg3 pairInfo:(id)arg4;
- (id)initWithDelegate:(id)arg1;
- (int)lastScorpiusDetectType;
- (void)setDelegate:(id)arg1;
- (void)setDelegateUUID:(id)arg1;
- (void)setLastScorpiusDetectType:(int)arg1;
- (void)startBLEUpdates:(id)arg1 blePairingUUID:(id)arg2 pairType:(int)arg3 bRadioUpdatesOn:(bool)arg4 bPairInfoUpdatesOn:(bool)arg5;
- (void)stopBLEUpdates:(id)arg1 blePairingUUID:(id)arg2;

@end
