
@interface ATLocalCloudAssetRequest : NSObject {
    ATAsset * _asset;
    NSFileHandle * _fileHandle;
    double  _startTime;
}

@property (nonatomic, retain) ATAsset *asset;
@property (nonatomic, retain) NSFileHandle *fileHandle;
@property (nonatomic) double startTime;

- (void).cxx_destruct;
- (id)asset;
- (id)fileHandle;
- (void)setAsset:(id)arg1;
- (void)setFileHandle:(id)arg1;
- (void)setStartTime:(double)arg1;
- (double)startTime;

@end
