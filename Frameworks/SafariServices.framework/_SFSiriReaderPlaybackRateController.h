
@interface _SFSiriReaderPlaybackRateController : NSObject <_SFSettingsAlertOptionsGroupController> {
    float  _playbackRate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *values;

- (id)attributedStringForValue:(id)arg1;
- (bool)isSelectedValue:(id)arg1;
- (void)prepareItem:(id)arg1 forValue:(id)arg2;
- (void)setSelectedValue:(id)arg1;
- (id)textStyleForValue:(id)arg1;
- (id)values;

@end
