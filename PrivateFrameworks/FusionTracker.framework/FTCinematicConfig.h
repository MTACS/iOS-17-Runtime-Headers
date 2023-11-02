
@interface FTCinematicConfig : NSObject {
    bool  _allowTrackPromotion;
    bool  _ensureObservationTimestampMatchesFrame;
}

@property (nonatomic) bool allowTrackPromotion;
@property (nonatomic) bool ensureObservationTimestampMatchesFrame;

- (bool)allowTrackPromotion;
- (bool)ensureObservationTimestampMatchesFrame;
- (id)init;
- (void)setAllowTrackPromotion:(bool)arg1;
- (void)setEnsureObservationTimestampMatchesFrame:(bool)arg1;

@end
