
@interface SUPrepareMediaItemOperation : ISOperation {
    SUMediaPlayerItem * _mediaItem;
}

@property (nonatomic, readonly, copy) SUMediaPlayerItem *mediaPlayerItem;

- (bool)_runHEADRequest:(id*)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithMediaPlayerItem:(id)arg1;
- (id)mediaPlayerItem;
- (void)run;

@end
