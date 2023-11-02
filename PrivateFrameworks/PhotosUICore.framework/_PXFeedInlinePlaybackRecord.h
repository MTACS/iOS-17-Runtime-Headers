
@interface _PXFeedInlinePlaybackRecord : PXGridInlinePlaybackRecord {
    long long  _desiredPlayState;
    _PXFeedInlinePlaybackController * _inlinePlaybackController;
}

@property (nonatomic) _PXFeedInlinePlaybackController *inlinePlaybackController;

- (void).cxx_destruct;
- (long long)desiredPlayState;
- (id)inlinePlaybackController;
- (void)setDesiredPlayState:(long long)arg1;
- (void)setInlinePlaybackController:(id)arg1;

@end
