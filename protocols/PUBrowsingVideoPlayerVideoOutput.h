
@protocol PUBrowsingVideoPlayerVideoOutput <NSObject>

@required

- (void)prepareForVideoResolutionChange;
- (id /* block */)readyForDisplayChangeHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (void)setReadyForDisplayChangeHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)videoOutputIsReadyForDisplay;

@end
