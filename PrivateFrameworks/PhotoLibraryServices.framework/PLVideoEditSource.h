
@interface PLVideoEditSource : PLEditSource {
    NSURL * _videoURL;
}

@property (nonatomic, readonly) NSURL *videoURL;

- (void).cxx_destruct;
- (id)initWithVideoURL:(id)arg1;
- (id)videoURL;

@end
