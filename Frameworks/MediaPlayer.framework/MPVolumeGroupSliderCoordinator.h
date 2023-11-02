
@interface MPVolumeGroupSliderCoordinator : NSObject {
    NSArray * _allSliders;
    int  _inFlightDisableOptimisticStateRequests;
    NSMutableSet * _individualVolumeSliders;
    MPVolumeSlider * _masterVolumeSlider;
    NSMapTable * _optimisticScales;
    NSMapTable * _optimisticValues;
    bool  _shouldOverrideTracking;
    bool  _synced;
    MPVolumeSlider * _trackingSlider;
}

@property (nonatomic, readonly, copy) NSArray *individualVolumeSliders;
@property (nonatomic, readonly) MPVolumeSlider *masterVolumeSlider;
@property (nonatomic, readonly) bool synced;

- (void).cxx_destruct;
- (void)_addControlEventsForVolumeSlider:(id)arg1;
- (void)_addControlEventsForVolumeSliders:(id)arg1;
- (id)_findExistingVolumeSlider:(id)arg1;
- (float)_maxOptimisticValue;
- (void)_removeControlEventsForVolumeSlider:(id)arg1;
- (void)_removeControlEventsForVolumeSliders:(id)arg1;
- (void)_resetMasterVolumeSlider;
- (void)_resetOptimisticScales;
- (void)_setControlEventsForVolumeSlider:(id)arg1 add:(bool)arg2;
- (void)_updateOptimisticValueCache;
- (void)addIndividualVolumeSlider:(id)arg1;
- (id)individualVolumeSliders;
- (id)initWithMasterVolumeSlider:(id)arg1 individualVolumeSliders:(id)arg2;
- (id)masterVolumeSlider;
- (void)removeAllIndividualVolumeSliders;
- (void)removeIndividualVolumeSlider:(id)arg1;
- (void)syncSliders:(bool)arg1;
- (bool)synced;
- (void)volumeSliderDidEndTracking:(id)arg1;
- (void)volumeSliderValueChanged:(id)arg1;

@end
