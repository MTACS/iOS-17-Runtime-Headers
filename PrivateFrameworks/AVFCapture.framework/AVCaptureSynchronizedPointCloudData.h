
@interface AVCaptureSynchronizedPointCloudData : AVCaptureSynchronizedData {
    long long  _droppedReason;
    AVPointCloudData * _pointCloudData;
    bool  _pointCloudDataWasDropped;
}

@property (readonly) long long droppedReason;
@property (readonly) AVPointCloudData *pointCloudData;
@property (readonly) bool pointCloudDataWasDropped;

- (id)_initWithPointCloudDataBuffer:(id)arg1 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 pointCloudDataWasDropped:(bool)arg3 droppedReason:(long long)arg4;
- (void)dealloc;
- (long long)droppedReason;
- (id)pointCloudData;
- (bool)pointCloudDataWasDropped;

@end
