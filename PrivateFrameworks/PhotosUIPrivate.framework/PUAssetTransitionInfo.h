
@interface PUAssetTransitionInfo : NSObject <NSCopying, PUAssetTransitionInfoConfiguration> {
    bool  _allowAutoPlay;
    <PUDisplayAsset> * _asset;
    NSArray * _badgeTransitionInfos;
    PUPhotoViewContentHelper * _contentHelper;
    double  _cornerRadius;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    UIImage * _image;
    PXImageLayerModulator * _imageLayerModulator;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _seekTime;
    UIView * _snapshotView;
}

@property (nonatomic) bool allowAutoPlay;
@property (nonatomic, retain) <PUDisplayAsset> *asset;
@property (nonatomic, copy) NSArray *badgeTransitionInfos;
@property (nonatomic, retain) PUPhotoViewContentHelper *contentHelper;
@property (nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) PXImageLayerModulator *imageLayerModulator;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } seekTime;
@property (nonatomic, retain) UIView *snapshotView;
@property (readonly) Class superclass;

+ (id)assetTransitionInfoWithConfigurationBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_applyConfigurationBlock:(id /* block */)arg1;
- (bool)allowAutoPlay;
- (id)asset;
- (id)assetTransitionInfoWithModifications:(id /* block */)arg1;
- (id)badgeTransitionInfos;
- (id)contentHelper;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)cornerRadius;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)image;
- (id)imageLayerModulator;
- (id)init;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })seekTime;
- (void)setAllowAutoPlay:(bool)arg1;
- (void)setAsset:(id)arg1;
- (void)setBadgeTransitionInfos:(id)arg1;
- (void)setContentHelper:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;
- (void)setImageLayerModulator:(id)arg1;
- (void)setSeekTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setSnapshotView:(id)arg1;
- (id)snapshotView;

@end
