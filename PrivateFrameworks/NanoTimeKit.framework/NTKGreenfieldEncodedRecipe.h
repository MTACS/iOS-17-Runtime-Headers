
@interface NTKGreenfieldEncodedRecipe : NSObject {
    NSURL * _watchFaceDataUrl;
    UIImage * _watchFaceImage;
    NSString * _watchFaceName;
}

@property (nonatomic, retain) NSURL *watchFaceDataUrl;
@property (nonatomic, retain) UIImage *watchFaceImage;
@property (nonatomic, retain) NSString *watchFaceName;

- (void).cxx_destruct;
- (id)initWithWatchFaceDataUrl:(id)arg1 watchFaceImage:(id)arg2 watchFaceName:(id)arg3;
- (void)setWatchFaceDataUrl:(id)arg1;
- (void)setWatchFaceImage:(id)arg1;
- (void)setWatchFaceName:(id)arg1;
- (id)watchFaceDataUrl;
- (id)watchFaceImage;
- (id)watchFaceName;

@end
