
@interface MFPhotoPickerProgressItem : NSObject {
    AVAssetExportSession * _exportSession;
    int  _imageRequestID;
    double  _progress;
}

@property (nonatomic, retain) AVAssetExportSession *exportSession;
@property (nonatomic) int imageRequestID;
@property (nonatomic) double progress;

- (void).cxx_destruct;
- (id)description;
- (id)exportSession;
- (int)imageRequestID;
- (double)progress;
- (void)setExportSession:(id)arg1;
- (void)setImageRequestID:(int)arg1;
- (void)setProgress:(double)arg1;

@end
