
@interface HSNowPlayingArtworkResponse : HSResponse {
    NSData * _artworkData;
    NSString * _artworkMIMEType;
}

@property (nonatomic, retain) NSData *artworkData;
@property (nonatomic, retain) NSString *artworkMIMEType;

- (void).cxx_destruct;
- (id)artworkData;
- (id)artworkMIMEType;
- (void)setArtworkData:(id)arg1;
- (void)setArtworkMIMEType:(id)arg1;

@end
