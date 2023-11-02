
@interface MRUVirtualHearingAidRoute : MPAVOutputDeviceRoute <AXHAServerDelegate> {
    <MRUVirtualHearingAidRouteObserver> * _hearingAidDelegate;
    bool  _isConnecting;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <MRUVirtualHearingAidRouteObserver> *hearingAidDelegate;
@property (nonatomic, readonly) bool isConnecting;
@property (readonly) Class superclass;

+ (void)disconnect;

- (void).cxx_destruct;
- (void)connect;
- (void)disconnect;
- (void)hearingAidConnectionDidChange:(bool)arg1;
- (id)hearingAidDelegate;
- (void)hearingServerDidDie:(id)arg1;
- (id)initWithHearingDeviceName:(id)arg1;
- (bool)isConnecting;
- (void)setHearingAidDelegate:(id)arg1;

@end
