
@interface AVTSnapshotBuilder : NSObject {
    AVTAvatar * _avatar;
    AVTRenderer * _renderer;
    AVTSnapshotHelper * _snapshotHelper;
    AVTAvatar * _snapshotedAvatar;
}

@property (nonatomic, retain) AVTAvatar *avatar;
@property (nonatomic, readonly) SCNRenderer *renderer;

+ (struct CGImage { }*)copyRescaledCGImage:(struct CGImage { }*)arg1 by:(float)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_applyOptions:(id)arg1;
- (id)_imageWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 options:(id)arg3;
- (id)_imageWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 options:(id)arg3 useACopy:(bool)arg4;
- (id)animatedImageWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 options:(id)arg3;
- (id)avatar;
- (void)dealloc;
- (id)imageWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 options:(id)arg3;
- (id)init;
- (id)renderer;
- (void)setAvatar:(id)arg1;
- (void)setupAvatarWithOptions:(id)arg1 useACopy:(bool)arg2;

@end
