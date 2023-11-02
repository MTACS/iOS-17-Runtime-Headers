
@interface WFShazamMedia : NSObject <NSCopying, NSSecureCoding, WFNaming> {
    NSString * _appleMusicID;
    NSURL * _appleMusicURL;
    NSString * _artist;
    NSURL * _artworkURL;
    bool  _isExplicit;
    NSString * _lyricsSnippet;
    NSString * _lyricsSnippetSynced;
    NSURL * _shazamURL;
    NSString * _title;
    NSURL * _videoURL;
}

@property (nonatomic, readonly, copy) NSString *appleMusicID;
@property (nonatomic, readonly, copy) NSURL *appleMusicURL;
@property (nonatomic, readonly, copy) NSString *artist;
@property (nonatomic, readonly, copy) NSURL *artworkURL;
@property (nonatomic, readonly) bool isExplicit;
@property (nonatomic, readonly, copy) NSString *lyricsSnippet;
@property (nonatomic, readonly, copy) NSString *lyricsSnippetSynced;
@property (nonatomic, readonly, copy) NSURL *shazamURL;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSURL *videoURL;
@property (nonatomic, readonly, copy) NSString *wfName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appleMusicID;
- (id)appleMusicURL;
- (id)artist;
- (id)artworkURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaItem:(id)arg1;
- (bool)isExplicit;
- (id)lyricsSnippet;
- (id)lyricsSnippetSynced;
- (id)shazamURL;
- (id)title;
- (id)videoURL;
- (id)wfName;

@end
