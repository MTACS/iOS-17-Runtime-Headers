
@protocol SXComponentExposureMonitor <NSObject>

@required

- (void)conditionsChanged;
- (void)onExposureOf:(void *)arg1 then:(void *)arg2; // needs 2 arg types, found 8: SXComponentView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, double, void*
- (void)onExposureOf:(void *)arg1 then:(void *)arg2 when:(void *)arg3; // needs 3 arg types, found 13: SXComponentView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, double, void*, id /* block */, void*, bool, id /* block */, void*
- (void)onExposureOf:(void *)arg1 traits:(void *)arg2 then:(void *)arg3; // needs 3 arg types, found 9: SXComponentView *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, double, void*
- (void)onExposureOf:(void *)arg1 traits:(void *)arg2 then:(void *)arg3 when:(void *)arg4; // needs 4 arg types, found 14: SXComponentView *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, double, void*, id /* block */, void*, bool, id /* block */, void*
- (void)stopTrackingExposureOfComponentView:(SXComponentView *)arg1;

@end
