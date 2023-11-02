
@interface WFPlayMusicActionContent : NSObject {
    MPMediaItemCollection * _mediaCollection;
    MPPlaybackArchive * _playbackArchive;
    NSArray * _storeIDs;
}

@property (nonatomic, retain) MPMediaItemCollection *mediaCollection;
@property (nonatomic, retain) MPPlaybackArchive *playbackArchive;
@property (nonatomic, copy) NSArray *storeIDs;

- (void).cxx_destruct;
- (id)contentDestinationWithError:(id*)arg1;
- (id)initWithMediaCollection:(id)arg1;
- (id)initWithPlaybackArchive:(id)arg1;
- (id)initWithStoreIDs:(id)arg1;
- (id)mediaCollection;
- (id)playbackArchive;
- (void)setMediaCollection:(id)arg1;
- (void)setPlaybackArchive:(id)arg1;
- (void)setStoreIDs:(id)arg1;
- (id)storeIDs;

@end
