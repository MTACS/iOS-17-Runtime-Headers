
@interface STSPayload : NSObject {
    NSURL * _imageURL;
    NSURL * _videoURL;
}

@property (nonatomic, copy) NSURL *imageURL;
@property (nonatomic, copy) NSURL *videoURL;

- (void).cxx_destruct;
- (id)imageURL;
- (void)setImageURL:(id)arg1;
- (void)setVideoURL:(id)arg1;
- (id)videoURL;

@end
