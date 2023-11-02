
@protocol DBSmartWidgetEngineObserver <NSObject>

@required

- (void)smartWidgetEngine:(DBSmartWidgetEngine *)arg1 didUpdateCurrentPredictions:(NSArray *)arg2;
- (void)smartWidgetEngineDidStart:(DBSmartWidgetEngine *)arg1;
- (void)smartWidgetEngineDidStop:(DBSmartWidgetEngine *)arg1;
- (void)smartWidgetEngineDidUpdatePredictionsFresh:(DBSmartWidgetEngine *)arg1;

@end
