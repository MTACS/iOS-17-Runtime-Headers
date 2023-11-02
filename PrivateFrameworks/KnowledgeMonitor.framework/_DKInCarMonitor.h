
@interface _DKInCarMonitor : _DKMonitor {
    bool  _connected;
    int  _connectedToken;
    int  _disconnectedToken;
    bool  _enabled;
}

@property (nonatomic) bool connected;
@property (nonatomic) int connectedToken;
@property (nonatomic) int disconnectedToken;
@property (nonatomic) bool enabled;

+ (id)entitlements;
+ (id)eventStream;
+ (void)setIsConnected:(bool)arg1;

- (bool)connected;
- (int)connectedToken;
- (void)deactivate;
- (void)dealloc;
- (int)disconnectedToken;
- (bool)enabled;
- (id)loadState;
- (void)saveState;
- (void)setConnected:(bool)arg1;
- (void)setConnectedStatus:(bool)arg1;
- (void)setConnectedToken:(int)arg1;
- (void)setDisconnectedToken:(int)arg1;
- (void)setEnabled:(bool)arg1;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;

@end
