
@interface SXPhoneNumberActionActivityProvider : NSObject <SXActionActivityProvider> {
    <SXDeviceCapabilities> * _deviceCapabilities;
    <SXHost> * _host;
    <SXMessagePresenter> * _messagePresenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXDeviceCapabilities> *deviceCapabilities;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXHost> *host;
@property (nonatomic, readonly) <SXMessagePresenter> *messagePresenter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityGroupForAction:(id)arg1;
- (void)call:(id)arg1 showDialog:(bool)arg2;
- (void)copy:(id)arg1;
- (id)deviceCapabilities;
- (void)faceTime:(id)arg1;
- (id)host;
- (id)initWithHost:(id)arg1 messagePresenter:(id)arg2 deviceCapabilities:(id)arg3;
- (void)message:(id)arg1;
- (id)messagePresenter;

@end
