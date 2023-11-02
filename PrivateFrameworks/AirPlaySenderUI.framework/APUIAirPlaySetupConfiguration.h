
@interface APUIAirPlaySetupConfiguration : NSObject {
    APUIAirPlaySetupConfigurationDiscoveryBroker * _broker;
    APUIAirPlaySetupConfigurationReceiver * _receiver;
    APUIAirPlaySetupConfigurationWiFi * _wifi;
}

@property (nonatomic, copy) APUIAirPlaySetupConfigurationDiscoveryBroker *broker;
@property (nonatomic, copy) APUIAirPlaySetupConfigurationReceiver *receiver;
@property (nonatomic, copy) APUIAirPlaySetupConfigurationWiFi *wifi;

- (void).cxx_destruct;
- (id)broker;
- (id)description;
- (id)receiver;
- (void)setBroker:(id)arg1;
- (void)setReceiver:(id)arg1;
- (void)setWifi:(id)arg1;
- (id)urlString;
- (id)wifi;

@end
