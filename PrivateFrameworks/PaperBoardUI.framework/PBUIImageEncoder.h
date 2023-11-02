
@interface PBUIImageEncoder : NSObject {
    PBUIImageOnDiskFormat * _format;
    NSURL * _url;
}

@property (nonatomic, copy) PBUIImageOnDiskFormat *format;
@property (nonatomic, copy) NSURL *url;

// Image: /System/Library/PrivateFrameworks/PaperBoardUI.framework/PaperBoardUI

+ (void)decorateSurface:(id)arg1 interfaceOrientation:(long long)arg2 deviceOrientation:(long long)arg3 scale:(double)arg4;
+ (bool)setSnapshotDeviceOrientation:(long long)arg1 forURL:(id)arg2;
+ (bool)setSnapshotInterfaceOrientation:(long long)arg1 forURL:(id)arg2;
+ (bool)setSnapshotScale:(double)arg1 forURL:(id)arg2;
+ (bool)setSnapshotVersionForURL:(id)arg1;
+ (long long)snapshotDeviceOrientationForURL:(id)arg1;
+ (long long)snapshotInterfaceOrientationForURL:(id)arg1;
+ (double)snapshotScaleForURL:(id)arg1;
+ (unsigned char)snapshotVersionForURL:(id)arg1;

- (void).cxx_destruct;
- (id)createUIImageWithError:(out id*)arg1;
- (id)createUIImageWithOrientation:(long long)arg1 scale:(double)arg2 error:(out id*)arg3;
- (void)currentSnapshotInterfaceOrientation:(long long*)arg1 outDeviceOrientation:(long long*)arg2;
- (id)format;
- (id)initWithURL:(id)arg1 format:(id)arg2;
- (id)saveImage:(struct CGImage { }*)arg1 error:(id*)arg2;
- (id)saveUIImage:(id)arg1 error:(id*)arg2;
- (void)setFormat:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;
- (id)writeThenReadBackImage:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard

+ (id)pbf_imageEncoderForPath:(id)arg1 definition:(id)arg2 configuredProperties:(id)arg3 context:(id)arg4;

@end
