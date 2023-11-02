
@interface VUIGroupWatchActivityPreviewMetadata : NSObject {
    struct CGImage { } * _artworkImage;
    NSNumber * _episodeNumber;
    NSURL * _fallbackUrl;
    TVImageProxy * _imageProxy;
    NSString * _imageUrlFormat;
    NSNumber * _seasonNumber;
    NSString * _seasonTitle;
    NSString * _title;
}

@property (nonatomic, readonly) struct CGImage { }*artworkImage;
@property (nonatomic, retain) NSNumber *episodeNumber;
@property (nonatomic, readonly, copy) NSURL *fallbackUrl;
@property (nonatomic, readonly, copy) TVImageProxy *imageProxy;
@property (nonatomic, readonly, copy) NSString *imageUrlFormat;
@property (nonatomic, retain) NSNumber *seasonNumber;
@property (nonatomic, copy) NSString *seasonTitle;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)metadataFromSerializedData:(id)arg1;

- (void).cxx_destruct;
- (struct CGImage { }*)artworkImage;
- (id)episodeNumber;
- (id)fallbackUrl;
- (id)imageProxy;
- (id)imageUrlFormat;
- (id)initWithContextData:(id)arg1;
- (id)initWithMediaItem:(id)arg1 fallbackUrl:(id)arg2;
- (id)initWithPlayable:(id)arg1 fallbackUrl:(id)arg2;
- (id)initWithTitle:(id)arg1 showTitle:(id)arg2 seasonTitle:(id)arg3 seasonNumber:(id)arg4 episodeNumber:(id)arg5 imageUrlFormat:(id)arg6 artworkImage:(struct CGImage { }*)arg7 fallbackUrl:(id)arg8 isTVShow:(bool)arg9;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 imageUrlFormat:(id)arg3 artworkImage:(struct CGImage { }*)arg4 fallbackUrl:(id)arg5;
- (id)localizedSubtitleForSeasonNumber:(id)arg1 episodeNumber:(id)arg2;
- (id)seasonNumber;
- (id)seasonTitle;
- (id)serializedDataWithSeasonTitlesEnabled:(bool)arg1;
- (void)setEpisodeNumber:(id)arg1;
- (void)setSeasonNumber:(id)arg1;
- (void)setSeasonTitle:(id)arg1;
- (id)subtitleWithSeasonTitlesEnabled:(bool)arg1;
- (id)title;

@end
