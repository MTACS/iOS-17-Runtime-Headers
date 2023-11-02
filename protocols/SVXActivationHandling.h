
@protocol SVXActivationHandling <NSObject>

@required

- (void)activateWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SVXActivationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)stopSpeech;
- (void)transitionToAutomaticEndpointingWithTimestamp:(unsigned long long)arg1;

@end
