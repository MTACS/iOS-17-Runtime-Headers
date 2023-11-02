
@protocol VKFrameProviderDelegate <NSObject>

@optional

- (void)frameProvider:(VKFrameProvider *)arg1 didChangeSceneLuminosity:(double)arg2;
- (void)frameProvider:(VKFrameProvider *)arg1 didChangeSceneStabilityState:(unsigned long long)arg2;

@end
