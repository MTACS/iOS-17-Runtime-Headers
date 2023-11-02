
@protocol MediaControlsEndpointsManagerDelegate <NSObject>

@required

- (void)endpointsManager:(MediaControlsEndpointsManager *)arg1 activeSystemRouteDidChange:(MPAVEndpointRoute *)arg2;
- (void)endpointsManager:(void *)arg1 defersRoutesReplacement:(void *)arg2; // needs 2 arg types, found 6: MediaControlsEndpointsManager *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, MPChangeDetails *, id /* block */, void*

@end
