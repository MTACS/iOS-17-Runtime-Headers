
@interface HUMediaItem : HFItem {
    MPPlaybackArchiveDisplayProperties * _playbackArchiveDisplayProperties;
}

@property (nonatomic, retain) MPPlaybackArchiveDisplayProperties *playbackArchiveDisplayProperties;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithPlaybackArchiveDisplayProperties:(id)arg1;
- (id)playbackArchiveDisplayProperties;
- (void)setPlaybackArchiveDisplayProperties:(id)arg1;

@end
