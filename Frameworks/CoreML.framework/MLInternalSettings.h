
@interface MLInternalSettings : NSObject <NSSecureCoding> {
    bool  _isNeuralNetworkGPUPathForbidden;
    bool  _restrictNeuralNetworksFromUsingANE;
    bool  _restrictNeuralNetworksToUseCPUOnly;
}

@property (nonatomic, readonly) bool isNeuralNetworkGPUPathForbidden;
@property bool restrictNeuralNetworksFromUsingANE;
@property bool restrictNeuralNetworksToUseCPUOnly;

+ (bool)deviceHasANE;
+ (id)globalSettings;
+ (id)globalSettingsFromSettings:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isNeuralNetworkGPUPathForbidden;
- (bool)restrictNeuralNetworksFromUsingANE;
- (bool)restrictNeuralNetworksToUseCPUOnly;
- (void)setRestrictNeuralNetworksFromUsingANE:(bool)arg1;
- (void)setRestrictNeuralNetworksToUseCPUOnly:(bool)arg1;

@end
