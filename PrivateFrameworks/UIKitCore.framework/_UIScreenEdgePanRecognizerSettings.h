
@interface _UIScreenEdgePanRecognizerSettings : _UISettings {
    _UIScreenEdgePanRecognizerCornerSettings * _cornerSettings;
    _UIScreenEdgePanRecognizerDwellSettings * _dwellSettings;
    _UIScreenEdgePanRecognizerEdgeSettings * _edgeSettings;
    NSString * _multitaskingGestureMode;
    NSString * _navigationGestureMode;
}

@property (nonatomic, retain) _UIScreenEdgePanRecognizerCornerSettings *cornerSettings;
@property (nonatomic, retain) _UIScreenEdgePanRecognizerDwellSettings *dwellSettings;
@property (nonatomic, retain) _UIScreenEdgePanRecognizerEdgeSettings *edgeSettings;
@property (nonatomic, copy) NSString *multitaskingGestureMode;
@property (nonatomic, copy) NSString *navigationGestureMode;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)cornerSettings;
- (id)dwellSettings;
- (id)edgeSettings;
- (id)multitaskingGestureMode;
- (id)navigationGestureMode;
- (void)setCornerSettings:(id)arg1;
- (void)setDwellSettings:(id)arg1;
- (void)setEdgeSettings:(id)arg1;
- (void)setMultitaskingGestureMode:(id)arg1;
- (void)setNavigationGestureMode:(id)arg1;

@end
