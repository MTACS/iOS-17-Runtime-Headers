
@interface _MPCPlaybackSessionArchive : MSVSegmentedCodingPackage {
    UIImage * _artworkImage;
    MPNowPlayingContentItem * _contentItem;
    NSString * _identifier;
    NSDate * _lastModifiedDate;
}

@property (nonatomic, copy) UIImage *artworkImage;
@property (nonatomic, copy) MPNowPlayingContentItem *contentItem;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSDate *lastModifiedDate;

+ (id)packageTypeIdentifier;

- (void).cxx_destruct;
- (id)artworkImage;
- (id)contentItem;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 identifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)lastModifiedDate;
- (bool)saveWithError:(id*)arg1;
- (void)setArtworkImage:(id)arg1;
- (void)setContentItem:(id)arg1;
- (bool)writeWithError:(id*)arg1;

@end
