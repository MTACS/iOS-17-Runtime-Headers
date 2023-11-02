
@protocol OKPresentationCanvasSubclassingHooks <NSObject>

@required

- (OKPresentationCanvas *)canvasWithName:(NSString *)arg1;
- (NSDictionary *)dictionary;
- (void)resolveIfNeeded;

@end
