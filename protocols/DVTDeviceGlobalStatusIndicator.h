
@protocol DVTDeviceGlobalStatusIndicator

@required

- (void)activateWithCompletionBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)deactivate;
- (id)initWithConfiguration:(void *)arg1 stoppedByUserBlock:(void *)arg2; // needs 2 arg types, found 6: DVTDeviceGlobalStatusIndicatorConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
