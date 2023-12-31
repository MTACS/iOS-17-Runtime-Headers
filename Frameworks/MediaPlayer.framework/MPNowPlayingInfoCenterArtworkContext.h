
@interface MPNowPlayingInfoCenterArtworkContext : NSObject {
    MPMediaItemArtwork * _artwork;
    NSData * _artworkData;
    NSString * _artworkIdentifier;
}

@property (nonatomic, retain) MPMediaItemArtwork *artwork;
@property (nonatomic, retain) NSData *artworkData;
@property (nonatomic, copy) NSString *artworkIdentifier;

- (void).cxx_destruct;
- (id)artwork;
- (id)artworkData;
- (id)artworkIdentifier;
- (void)setArtwork:(id)arg1;
- (void)setArtworkData:(id)arg1;
- (void)setArtworkIdentifier:(id)arg1;

@end
