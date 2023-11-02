
@interface _TVRCRMSDeviceQuery : NSObject <TVRMSDiscoverySessionDelegate> {
    <_TVRCRMSDeviceQueryDelegate> * _delegate;
    <TVRMSDiscoverySession> * _legacyDiscoverySession;
    TVRMSService * _service;
    NSMutableDictionary * _wrapperToIdentifierMapping;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_TVRCRMSDeviceQueryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <TVRMSDiscoverySession> *legacyDiscoverySession;
@property (nonatomic, retain) TVRMSService *service;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *wrapperToIdentifierMapping;

- (void).cxx_destruct;
- (bool)_shouldReportDevice:(id)arg1;
- (id)delegate;
- (void)discoverySessionDidUpdateAvailableServices:(id)arg1;
- (id)legacyDiscoverySession;
- (id)service;
- (void)setDelegate:(id)arg1;
- (void)setLegacyDiscoverySession:(id)arg1;
- (void)setService:(id)arg1;
- (void)setWrapperToIdentifierMapping:(id)arg1;
- (void)start;
- (void)stop;
- (id)wrapperToIdentifierMapping;

@end
