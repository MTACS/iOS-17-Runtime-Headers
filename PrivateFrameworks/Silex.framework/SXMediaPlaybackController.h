
@interface SXMediaPlaybackController : NSObject <SXViewportChangeListener> {
    <SXMediaPlaybackDelegate> * _mediaPlaybackDelegate;
    SXViewport * _viewport;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;

@end
