
@interface AVExternalPlaybackController : NSObject {
    id /* block */  _clientCompletionHandler;
    MPMediaControls * _mediaControls;
}

+ (id)externalPlaybackStateDescriptionForState:(long long)arg1;

- (void).cxx_destruct;
- (void)_invokeClientCompletionHandlerWithPlaybackState:(long long)arg1;
- (void)willBeginPlaybackFromAppWithBundleID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)willBeginPlaybackWithCompletionHandler:(id /* block */)arg1;

@end
