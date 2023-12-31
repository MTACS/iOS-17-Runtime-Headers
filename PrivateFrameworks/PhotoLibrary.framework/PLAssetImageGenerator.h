
@interface PLAssetImageGenerator : NSObject {
    AVAssetImageGenerator * _imageGenerator;
    bool  _inUse;
}

@property (nonatomic, retain) AVAssetImageGenerator *imageGenerator;
@property (nonatomic) bool inUse;

- (void)dealloc;
- (id)imageGenerator;
- (bool)inUse;
- (id)initWithAsset:(id)arg1;
- (void)setImageGenerator:(id)arg1;
- (void)setInUse:(bool)arg1;

@end
