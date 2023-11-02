
@interface VKFrame : NSObject {
    VKFrameInfo * _info;
}

@property (nonatomic, readonly) struct __CVBuffer { }*CVImageBuffer;
@property (nonatomic, readonly) VNImageRequestHandler *imageRequestHandler;
@property (nonatomic, retain) VKFrameInfo *info;

- (void).cxx_destruct;
- (struct __CVBuffer { }*)CVImageBuffer;
- (id)imageRequestHandler;
- (id)info;
- (void)setInfo:(id)arg1;

@end
