
@interface TPSAssetsInfo : NSObject <NSSecureCoding> {
    void imageIdentifier;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  imageURL;
    void videoIdentifier;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  videoURL;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSString *imageIdentifier;
@property (nonatomic, copy) NSURL *imageURL;
@property (nonatomic, copy) NSString *videoIdentifier;
@property (nonatomic, copy) NSURL *videoURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)imageIdentifier;
- (id)imageURL;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithVideoIdentifier:(id)arg1 videoURL:(id)arg2 imageIdentifier:(id)arg3 imageURL:(id)arg4;
- (void)setImageIdentifier:(id)arg1;
- (void)setImageURL:(id)arg1;
- (void)setVideoIdentifier:(id)arg1;
- (void)setVideoURL:(id)arg1;
- (id)videoIdentifier;
- (id)videoURL;

@end
