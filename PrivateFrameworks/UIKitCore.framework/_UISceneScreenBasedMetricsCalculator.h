
@interface _UISceneScreenBasedMetricsCalculator : NSObject <_UISceneMetricsCalculating> {
    UIWindowScene * _scene;
}

@property (setter=_setScene:, nonatomic) UIWindowScene *_scene;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_scene;
- (void)_setScene:(id)arg1;
- (void)_updateMetricsOnWindows:(id)arg1 animated:(bool)arg2;

@end
