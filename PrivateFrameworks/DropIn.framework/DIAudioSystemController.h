
@interface DIAudioSystemController : NSObject <DIAudioStatusDelegate> {
    DIXPCConnectionManager * _connectionManager;
    <DIAudioSystemControllerDelegate> * _delegate;
    bool  _downlinkMuted;
    NSRecursiveLock * _lock;
    bool  _needsInitialDownlinkMuteStatus;
    bool  _needsInitialUplinkMuteStatus;
    bool  _uplinkMuted;
}

@property (nonatomic, readonly) DIXPCConnectionManager *connectionManager;
@property (nonatomic) <DIAudioSystemControllerDelegate> *delegate;
@property (getter=isDownlinkMuted, nonatomic) bool downlinkMuted;
@property (nonatomic, readonly) NSRecursiveLock *lock;
@property (nonatomic) bool needsInitialDownlinkMuteStatus;
@property (nonatomic) bool needsInitialUplinkMuteStatus;
@property (getter=isUplinkMuted, nonatomic) bool uplinkMuted;

- (void).cxx_destruct;
- (id)connectionManager;
- (void)dealloc;
- (id)delegate;
- (void)didUpdateDownlinkMuteStatus:(bool)arg1;
- (void)didUpdateUplinkMuteStatus:(bool)arg1;
- (id)initWithConnectionManager:(id)arg1;
- (bool)isDownlinkMuted;
- (bool)isUplinkMuted;
- (id)lock;
- (bool)needsInitialDownlinkMuteStatus;
- (bool)needsInitialUplinkMuteStatus;
- (void)setDelegate:(id)arg1;
- (void)setDownlinkMuted:(bool)arg1;
- (void)setNeedsInitialDownlinkMuteStatus:(bool)arg1;
- (void)setNeedsInitialUplinkMuteStatus:(bool)arg1;
- (void)setUplinkMuted:(bool)arg1;

@end
