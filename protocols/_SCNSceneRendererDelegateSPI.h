
@protocol _SCNSceneRendererDelegateSPI <NSObject>

@optional

- (void)_renderer:(void *)arg1 didBuildSubdivDataForHash:(void *)arg2 dataProvider:(void *)arg3; // needs 3 arg types, found 7: <SCNSceneRenderer> *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSData *, id /* block */, void*
- (double)_renderer:(id <SCNSceneRenderer>)arg1 inputTimeForCurrentFrameWithTime:(double)arg2;
- (NSData *)_renderer:(id <SCNSceneRenderer>)arg1 subdivDataForHash:(NSString *)arg2;

@end
