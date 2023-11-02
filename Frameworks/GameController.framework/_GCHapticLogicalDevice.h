
@interface _GCHapticLogicalDevice : NSObject {
    _GCHapticClientProxy * _clientConnection;
    <_GCDriverClientHapticInterface> * _driver;
    NSMutableArray * _hapticClients;
    NSMutableArray * _hapticPlayers;
    <NSCopying><NSObject><NSSecureCoding> * _identifier;
    <_GCLogicalDevice> * _logicalDevice;
    float  _prevIntensity;
    float  _prevSharpness;
}

- (void).cxx_destruct;
- (bool)hasClients;
- (id)initWithIdentifier:(id)arg1 clientConnection:(id)arg2;
- (void)registerHapticClient:(id)arg1;
- (void)stopAllHaptics;
- (void)unregisterHapticClient:(id)arg1;

@end
