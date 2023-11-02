
@interface SBPIPEdgeResizeSettings : PTSettings {
    SBPIPEdgeResizeAnchorPointSettings * _anchorPointSettings;
    bool  _blurNoteWhileResizing;
    bool  _disableCornerResizeForButtons;
    double  _hysteresis;
    double  _liveResizePointerInteractionRegionCornerLength;
    double  _liveResizePointerInteractionRegionInnerLength;
    double  _liveResizePointerInteractionRegionOuterLength;
}

@property (nonatomic, retain) SBPIPEdgeResizeAnchorPointSettings *anchorPointSettings;
@property (nonatomic) bool blurNoteWhileResizing;
@property (nonatomic) bool disableCornerResizeForButtons;
@property (nonatomic) double hysteresis;
@property (nonatomic) double liveResizePointerInteractionRegionCornerLength;
@property (nonatomic) double liveResizePointerInteractionRegionInnerLength;
@property (nonatomic) double liveResizePointerInteractionRegionOuterLength;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)anchorPointSettings;
- (bool)blurNoteWhileResizing;
- (bool)disableCornerResizeForButtons;
- (double)hysteresis;
- (double)liveResizePointerInteractionRegionCornerLength;
- (double)liveResizePointerInteractionRegionInnerLength;
- (double)liveResizePointerInteractionRegionOuterLength;
- (void)setAnchorPointSettings:(id)arg1;
- (void)setBlurNoteWhileResizing:(bool)arg1;
- (void)setDefaultValues;
- (void)setDisableCornerResizeForButtons:(bool)arg1;
- (void)setHysteresis:(double)arg1;
- (void)setLiveResizePointerInteractionRegionCornerLength:(double)arg1;
- (void)setLiveResizePointerInteractionRegionInnerLength:(double)arg1;
- (void)setLiveResizePointerInteractionRegionOuterLength:(double)arg1;

@end
