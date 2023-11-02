
@interface MPNowPlayingContentItemRemoteArtwork : NSObject {
    NSString * _artworkURLString;
    NSData * _artworkURLTemplateData;
}

@property (nonatomic, readonly) NSString *artworkURLString;
@property (nonatomic, readonly) NSData *artworkURLTemplateData;

- (void).cxx_destruct;
- (id)artworkURLString;
- (id)artworkURLTemplateData;
- (unsigned long long)hash;
- (id)initWithArtworkURLString:(id)arg1 templateData:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
