
@interface NTKApricotComplicationController : NTKComplicationController {
    NTKApricotComplication * _apricotComplication;
    NSMapTable * _displayWrapperToShowPreview;
    NSMapTable * _displayWrapperToShowSnapshot;
    NTKComplicationVariant * _variant;
}

+ (bool)_acceptsComplicationType:(unsigned long long)arg1 family:(long long)arg2 forDevice:(id)arg3;
+ (bool)_isLegacy;

- (void).cxx_destruct;
- (void)_updateStateForDisplayWrapper:(id)arg1;
- (void)addDisplayWrapper:(id)arg1;
- (id)complicationApplicationIdentifier;
- (void)didTouchUpInsideView:(id)arg1;
- (bool)hasTapAction;
- (id)initWithComplication:(id)arg1 variant:(id)arg2 device:(id)arg3;
- (void)removeDisplayWrapper:(id)arg1;
- (Class)richComplicationDisplayViewClass;
- (void)setDataMode:(long long)arg1 forDisplayWrapper:(id)arg2;
- (void)setLaunchLocation:(id)arg1 forDisplayWrapper:(id)arg2;
- (void)setShowPreview:(bool)arg1 forDisplayWrapper:(id)arg2;
- (void)setShowSnapshot:(bool)arg1 forDisplayWrapper:(id)arg2;
- (bool)showPreviewForDisplayWrapper:(id)arg1;
- (bool)showSnapshotForDisplayWrapper:(id)arg1;
- (bool)wantsLegacyDisplay;

@end
