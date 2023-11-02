
@interface LPInlineMediaPlaybackInformation : NSObject {
    LPAudio * _audio;
    LPLyricExcerptMetadata * _lyricExcerpt;
    NSArray * _offers;
    NSString * _persistentIdentifier;
    NSURL * _previewURL;
    NSString * _storeIdentifier;
    NSString * _storefrontIdentifier;
    unsigned long long  _type;
}

@property (nonatomic, retain) LPAudio *audio;
@property (nonatomic, readonly) bool isAvailableForAnonymousDownload;
@property (nonatomic, retain) LPLyricExcerptMetadata *lyricExcerpt;
@property (nonatomic, copy) NSArray *offers;
@property (nonatomic, copy) NSString *persistentIdentifier;
@property (nonatomic, copy) NSURL *previewURL;
@property (nonatomic, copy) NSString *storeIdentifier;
@property (nonatomic, copy) NSString *storefrontIdentifier;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)audio;
- (unsigned long long)availability;
- (id)initWithType:(unsigned long long)arg1;
- (bool)isAvailableForAnonymousDownload;
- (id)lyricExcerpt;
- (id)offers;
- (id)persistentIdentifier;
- (id)previewURL;
- (void)setAudio:(id)arg1;
- (void)setLyricExcerpt:(id)arg1;
- (void)setOffers:(id)arg1;
- (void)setPersistentIdentifier:(id)arg1;
- (void)setPreviewURL:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (void)setStorefrontIdentifier:(id)arg1;
- (id)storeIdentifier;
- (id)storefrontIdentifier;
- (unsigned long long)type;

@end
