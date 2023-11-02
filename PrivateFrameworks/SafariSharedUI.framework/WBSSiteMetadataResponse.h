
@interface WBSSiteMetadataResponse : NSObject {
    NSURL * _url;
}

@property (nonatomic, readonly) NSURL *url;

+ (id)responseWithURL:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithURL:(id)arg1;
- (id)url;

@end
