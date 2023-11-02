
@interface VideosUI.VUIJetPackControllerResponse : NSObject {
    void source;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  url;
}

@property (nonatomic, readonly) NSString *source;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)init;
- (id)source;
- (id)url;

@end
