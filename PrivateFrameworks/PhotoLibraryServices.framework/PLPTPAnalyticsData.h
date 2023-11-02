
@interface PLPTPAnalyticsData : NSObject {
    NSString * _buildVersion;
    long long  _cplState;
    unsigned long long  _deferredRenderCount;
    unsigned long long  _downloadedCount;
    unsigned long long  _imageTranscodedCount;
    unsigned long long  _libraryAssetCount;
    NSString * _platform;
    NSString * _platformVersion;
    double  _timeConnected;
    double  _timeDisconnected;
    NSString * _transport;
    NSString * _uuid;
    NSString * _vendor;
    unsigned long long  _videoTranscodedCount;
}

@property (nonatomic, copy) NSString *buildVersion;
@property (nonatomic) long long cplState;
@property (nonatomic) unsigned long long deferredRenderCount;
@property (nonatomic) unsigned long long downloadedCount;
@property (nonatomic) unsigned long long imageTranscodedCount;
@property (nonatomic) unsigned long long libraryAssetCount;
@property (nonatomic, copy) NSString *platform;
@property (nonatomic, copy) NSString *platformVersion;
@property (nonatomic) double timeConnected;
@property (nonatomic) double timeDisconnected;
@property (nonatomic, copy) NSString *transport;
@property (nonatomic, copy) NSString *uuid;
@property (nonatomic, copy) NSString *vendor;
@property (nonatomic) unsigned long long videoTranscodedCount;

- (void).cxx_destruct;
- (id)buildVersion;
- (long long)cplState;
- (id)cplStateString;
- (unsigned long long)deferredRenderCount;
- (id)description;
- (unsigned long long)downloadedCount;
- (unsigned long long)imageTranscodedCount;
- (void)incrementConversionCountForAssetType:(short)arg1;
- (id)init;
- (unsigned long long)libraryAssetCount;
- (id)platform;
- (id)platformVersion;
- (void)report;
- (void)setBuildVersion:(id)arg1;
- (void)setCplState:(long long)arg1;
- (void)setDeferredRenderCount:(unsigned long long)arg1;
- (void)setDownloadedCount:(unsigned long long)arg1;
- (void)setImageTranscodedCount:(unsigned long long)arg1;
- (void)setLibraryAssetCount:(unsigned long long)arg1;
- (void)setPlatform:(id)arg1;
- (void)setPlatformVersion:(id)arg1;
- (void)setTimeConnected:(double)arg1;
- (void)setTimeDisconnected:(double)arg1;
- (void)setTransport:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setVendor:(id)arg1;
- (void)setVideoTranscodedCount:(unsigned long long)arg1;
- (double)timeConnected;
- (double)timeDisconnected;
- (id)transport;
- (void)updateWithPlatformInformation:(id)arg1;
- (id)uuid;
- (id)vendor;
- (unsigned long long)videoTranscodedCount;

@end
