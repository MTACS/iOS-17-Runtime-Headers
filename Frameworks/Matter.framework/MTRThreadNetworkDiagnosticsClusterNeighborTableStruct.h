
@interface MTRThreadNetworkDiagnosticsClusterNeighborTableStruct : NSObject <NSCopying> {
    NSNumber * _age;
    NSNumber * _averageRssi;
    NSNumber * _extAddress;
    NSNumber * _frameErrorRate;
    NSNumber * _fullNetworkData;
    NSNumber * _fullThreadDevice;
    NSNumber * _isChild;
    NSNumber * _lastRssi;
    NSNumber * _linkFrameCounter;
    NSNumber * _lqi;
    NSNumber * _messageErrorRate;
    NSNumber * _mleFrameCounter;
    NSNumber * _rloc16;
    NSNumber * _rxOnWhenIdle;
}

@property (nonatomic, copy) NSNumber *age;
@property (nonatomic, copy) NSNumber *averageRssi;
@property (nonatomic, copy) NSNumber *extAddress;
@property (nonatomic, copy) NSNumber *frameErrorRate;
@property (nonatomic, copy) NSNumber *fullNetworkData;
@property (nonatomic, copy) NSNumber *fullThreadDevice;
@property (nonatomic, copy) NSNumber *isChild;
@property (nonatomic, copy) NSNumber *lastRssi;
@property (nonatomic, copy) NSNumber *linkFrameCounter;
@property (nonatomic, copy) NSNumber *lqi;
@property (nonatomic, copy) NSNumber *messageErrorRate;
@property (nonatomic, copy) NSNumber *mleFrameCounter;
@property (nonatomic, copy) NSNumber *rloc16;
@property (nonatomic, copy) NSNumber *rxOnWhenIdle;

- (void).cxx_destruct;
- (id)age;
- (id)averageRssi;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)extAddress;
- (id)frameErrorRate;
- (id)fullNetworkData;
- (id)fullThreadDevice;
- (id)init;
- (id)isChild;
- (id)lastRssi;
- (id)linkFrameCounter;
- (id)lqi;
- (id)messageErrorRate;
- (id)mleFrameCounter;
- (id)rloc16;
- (id)rxOnWhenIdle;
- (void)setAge:(id)arg1;
- (void)setAverageRssi:(id)arg1;
- (void)setExtAddress:(id)arg1;
- (void)setFrameErrorRate:(id)arg1;
- (void)setFullNetworkData:(id)arg1;
- (void)setFullThreadDevice:(id)arg1;
- (void)setIsChild:(id)arg1;
- (void)setLastRssi:(id)arg1;
- (void)setLinkFrameCounter:(id)arg1;
- (void)setLqi:(id)arg1;
- (void)setMessageErrorRate:(id)arg1;
- (void)setMleFrameCounter:(id)arg1;
- (void)setRloc16:(id)arg1;
- (void)setRxOnWhenIdle:(id)arg1;

@end
