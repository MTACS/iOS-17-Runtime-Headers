
@protocol PUAdjustmentsToolControllerPPT

@required

- (void)ppt_scrollSelectedSliderByDelta;
- (void)ppt_selectBWSlider:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)ppt_selectColorSlider:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)ppt_selectLightSlider:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)ppt_selectSliderNamed:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)ppt_setSteps:(long long)arg1;
- (double)ppt_valueIncrementForSelectedSlider;
- (double)ppt_visibleScaleValueForSelectedSlider;

@end
