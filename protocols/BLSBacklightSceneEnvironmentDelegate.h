
@protocol BLSBacklightSceneEnvironmentDelegate <NSObject>

@required

- (void)environment:(id <BLSBacklightSceneEnvironment>)arg1 performBacklightSceneUpdate:(BLSBacklightSceneUpdate *)arg2;
- (void)environment:(void *)arg1 timelinesForDateInterval:(void *)arg2 previousSpecifier:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: <BLSBacklightSceneEnvironment> *, NSDateInterval *, BLSAlwaysOnFrameSpecifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@end
