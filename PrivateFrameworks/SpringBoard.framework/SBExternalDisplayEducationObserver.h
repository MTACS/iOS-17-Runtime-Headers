
@interface SBExternalDisplayEducationObserver : NSObject {
    <BNPosting> * _bannerPoster;
    SBExternalDisplayEducationSession * _educationSession;
}

- (void).cxx_destruct;
- (void)_deviceConnectionWindowExpired:(id)arg1;
- (void)_extendedDisplayControllerDidConnect:(id)arg1;
- (void)_extendedDisplayControllerDidDisconnect:(id)arg1;
- (void)_hardwareAvailabilityChanged:(id)arg1;
- (void)dealloc;
- (id)initWithBannerPoster:(id)arg1;

@end
