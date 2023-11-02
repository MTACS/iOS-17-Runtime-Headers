
@interface CHEmbeddedAudioResourceInfo : NSObject {
    NSDictionary * _options;
    NSURL * _url;
}

@property (readonly) NSDictionary *options;
@property (readonly) NSURL *url;

- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)options;
- (id)url;

@end
