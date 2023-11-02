
@interface CVADepthTOF : NSObject <NSSecureCoding> {
    NSDictionary * _data;
    unsigned long long  _frameId;
    NSDictionary * _metadata;
    ADJasperPointCloud * _pointCloud;
    long long  _projectorMode;
    unsigned long long  _syncTimestamp;
    double  _timestamp;
}

@property (nonatomic, retain) NSDictionary *data;
@property (nonatomic) unsigned long long frameId;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic, retain) ADJasperPointCloud *pointCloud;
@property (nonatomic) long long projectorMode;
@property (nonatomic) unsigned long long syncTimestamp;
@property (nonatomic) double timestamp;

+ (id)classes;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)frameId;
- (id)initWithADJasperPointCloud:(id)arg1 timestamp:(double)arg2;
- (id)initWithAVPointCloudData:(id)arg1 timestamp:(double)arg2;
- (id)initWithCVDataBufferRef:(struct __CVBuffer { }*)arg1 timestamp:(double)arg2 projectorMode:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithJasperDepth:(id)arg1 timestamp:(double)arg2 projectorMode:(long long)arg3;
- (id)metadata;
- (id)pointCloud;
- (long long)projectorMode;
- (void)reset;
- (void)setData:(id)arg1;
- (void)setFrameId:(unsigned long long)arg1;
- (void)setMetadata:(id)arg1;
- (void)setPointCloud:(id)arg1;
- (void)setProjectorMode:(long long)arg1;
- (void)setSyncTimestamp:(unsigned long long)arg1;
- (void)setTimestamp:(double)arg1;
- (unsigned long long)syncTimestamp;
- (double)timestamp;

@end
