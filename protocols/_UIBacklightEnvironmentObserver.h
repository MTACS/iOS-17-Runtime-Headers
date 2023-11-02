
@protocol _UIBacklightEnvironmentObserver <NSObject>

@required

- (NSArray *)_timelinesForDateInterval:(NSDateInterval *)arg1;
- (void)_timelinesForDateInterval:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSDateInterval *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)_updateWithFrameSpecifier:(BLSAlwaysOnFrameSpecifier *)arg1;
- (void)_updateWithFrameSpecifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: BLSAlwaysOnFrameSpecifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@optional

- (void)_didEnterAlwaysOn;
- (void)_didExitAlwaysOn;
- (void)_willEnterAlwaysOn;
- (void)_willExitAlwaysOn;

@end
