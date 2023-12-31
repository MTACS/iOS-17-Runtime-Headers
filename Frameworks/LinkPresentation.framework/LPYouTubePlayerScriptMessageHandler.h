
@interface LPYouTubePlayerScriptMessageHandler : NSObject <WKScriptMessageHandler> {
    LPYouTubePlayerView * _playerView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPlayerView:(id)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;

@end
