
@interface GTCaptureProgressStatistics : NSObject <NSSecureCoding> {
    unsigned long long  _GPUDataDownloaded;
    unsigned long long  _GPUDataSize;
    unsigned long long  _commitCount;
    unsigned long long  _commitOther;
    unsigned long long  _frameCount;
    unsigned long long  _frameOther;
    unsigned long long  _resourceCount;
    unsigned long long  _resourceDownloaded;
}

@property (nonatomic) unsigned long long GPUDataDownloaded;
@property (nonatomic) unsigned long long GPUDataSize;
@property (nonatomic) unsigned long long commitCount;
@property (nonatomic) unsigned long long commitOther;
@property (nonatomic) unsigned long long frameCount;
@property (nonatomic) unsigned long long frameOther;
@property (nonatomic) unsigned long long resourceCount;
@property (nonatomic) unsigned long long resourceDownloaded;

+ (bool)supportsSecureCoding;

- (unsigned long long)GPUDataDownloaded;
- (unsigned long long)GPUDataSize;
- (unsigned long long)commitCount;
- (unsigned long long)commitOther;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)frameCount;
- (unsigned long long)frameOther;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)resourceCount;
- (unsigned long long)resourceDownloaded;
- (void)setCommitCount:(unsigned long long)arg1;
- (void)setCommitOther:(unsigned long long)arg1;
- (void)setFrameCount:(unsigned long long)arg1;
- (void)setFrameOther:(unsigned long long)arg1;
- (void)setGPUDataDownloaded:(unsigned long long)arg1;
- (void)setGPUDataSize:(unsigned long long)arg1;
- (void)setResourceCount:(unsigned long long)arg1;
- (void)setResourceDownloaded:(unsigned long long)arg1;

@end
