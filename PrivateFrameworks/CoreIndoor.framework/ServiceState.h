
@interface ServiceState : NSObject {
    IndoorProtocolProxy * _delegateProxy;
    CLGpsPosition * _lastLocation;
    bool  _pausedLocalization;
    bool  _updateLocation;
}

@property (nonatomic, retain) IndoorProtocolProxy *delegateProxy;
@property (nonatomic, retain) CLGpsPosition *lastLocation;
@property (nonatomic) bool pausedLocalization;
@property (nonatomic) bool updateLocation;

- (void).cxx_destruct;
- (id)delegateProxy;
- (id)lastLocation;
- (bool)pausedLocalization;
- (void)setDelegateProxy:(id)arg1;
- (void)setLastLocation:(id)arg1;
- (void)setPausedLocalization:(bool)arg1;
- (void)setUpdateLocation:(bool)arg1;
- (bool)updateLocation;

@end
