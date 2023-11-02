
@interface PLVolumeInfo : NSObject {
    unsigned long long  _blockSize;
    unsigned long long  _desiredDiskThreshold;
    unsigned long long  _lowDiskThreshold;
    NSString * _mountPoint;
    unsigned long long  _nearLowDiskThreshold;
    unsigned long long  _veryLowDiskThreshold;
    unsigned long long  _volumeSize;
}

@property (nonatomic, readonly) long long availableSpace;
@property (nonatomic, readonly) unsigned long long desiredDiskThreshold;
@property (nonatomic, readonly) unsigned long long lowDiskThreshold;
@property (nonatomic, readonly) unsigned long long nearLowDiskThreshold;
@property (nonatomic, readonly) unsigned long long veryLowDiskThreshold;
@property (nonatomic, readonly) unsigned long long volumeSize;

- (void).cxx_destruct;
- (long long)availableSpace;
- (unsigned long long)desiredDiskThreshold;
- (id)initWithMountPoint:(id)arg1;
- (id)initWithPath:(id)arg1;
- (unsigned long long)lowDiskThreshold;
- (unsigned long long)nearLowDiskThreshold;
- (unsigned long long)veryLowDiskThreshold;
- (unsigned long long)volumeSize;

@end
