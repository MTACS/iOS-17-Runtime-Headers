
@interface DIAudioPowerController : NSObject <DIAudioPowerDelegate, DIXPCManagerCheckInObserver> {
    DIXPCConnectionManager * _connectionManager;
    <DIAudioPowerControllerDelegate> * _delegate;
}

@property (nonatomic, readonly) DIXPCConnectionManager *connectionManager;
@property (nonatomic) <DIAudioPowerControllerDelegate> *delegate;

- (void).cxx_destruct;
- (id)connectionManager;
- (void)dealloc;
- (id)delegate;
- (void)didUpdateAudioPower:(float)arg1;
- (id)initWithConnectionManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)xpcManagerDidPerformDaemonCheckIn:(id)arg1;

@end
