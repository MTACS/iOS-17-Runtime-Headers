
@interface WBSLeadImageCacheResponse : WBSSiteMetadataResponse {
    UIImage * _thumbnail;
}

@property (nonatomic, readonly) UIImage *thumbnail;

+ (id)responseWithURL:(id)arg1 thumbnail:(id)arg2;

- (void).cxx_destruct;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 thumbnail:(id)arg2;
- (id)thumbnail;

@end
