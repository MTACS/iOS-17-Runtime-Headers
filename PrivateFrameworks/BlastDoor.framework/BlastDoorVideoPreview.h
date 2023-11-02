
@interface BlastDoorVideoPreview : NSObject {
    void videoPreview;
}

@property (nonatomic, readonly) BlastDoorVideoPreview_AudioFormat *audioFormat;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long frame;
@property (nonatomic, readonly) BlastDoorImage *image;
@property (nonatomic, readonly) bool isAutoloop;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) long long trackCount;
@property (nonatomic, readonly) BlastDoorVideoPreview_VideoFormat *videoFormat;
@property (nonatomic, readonly) bool videoIsMonoskiAsset;

- (void).cxx_destruct;
- (id)audioFormat;
- (id)description;
- (long long)frame;
- (id)image;
- (id)init;
- (bool)isAutoloop;
- (double)timestamp;
- (long long)trackCount;
- (id)videoFormat;
- (bool)videoIsMonoskiAsset;

@end
