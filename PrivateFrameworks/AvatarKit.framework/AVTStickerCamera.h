
@interface AVTStickerCamera : NSObject {
    SCNNode * _node;
}

@property (nonatomic, retain) SCNNode *node;

+ (id)cameraFromDictionary:(id)arg1 assetsPath:(id)arg2;
+ (id)stickerCameraCache;

- (void).cxx_destruct;
- (id)buildNode;
- (id)initWithCameraNode:(id)arg1;
- (id)node;
- (void)setNode:(id)arg1;

@end
