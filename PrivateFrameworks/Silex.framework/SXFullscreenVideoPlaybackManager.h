
@interface SXFullscreenVideoPlaybackManager : NSObject {
    NSHashTable * _candidates;
    bool  _layoutInProgress;
    bool  _transitionInProgress;
}

- (void).cxx_destruct;
- (id)init;

@end
