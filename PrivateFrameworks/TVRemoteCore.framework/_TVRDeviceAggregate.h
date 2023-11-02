
@interface _TVRDeviceAggregate : NSObject {
    TVRCHMServiceWrapper * _homeKit;
    TVRXDevice * _publicDevice;
    TVRCRPCompanionLinkClientWrapper * _rapport;
    _TVRCRMSDeviceWrapper * _remoteMediaService;
}

@property (nonatomic, retain) TVRCHMServiceWrapper *homeKit;
@property (nonatomic, retain) TVRXDevice *publicDevice;
@property (nonatomic, retain) TVRCRPCompanionLinkClientWrapper *rapport;
@property (nonatomic, retain) _TVRCRMSDeviceWrapper *remoteMediaService;

- (void).cxx_destruct;
- (id)bestImpl;
- (id)homeKit;
- (bool)isEmpty;
- (id)publicDevice;
- (id)rapport;
- (id)remoteMediaService;
- (void)setHomeKit:(id)arg1;
- (void)setPublicDevice:(id)arg1;
- (void)setRapport:(id)arg1;
- (void)setRemoteMediaService:(id)arg1;

@end
