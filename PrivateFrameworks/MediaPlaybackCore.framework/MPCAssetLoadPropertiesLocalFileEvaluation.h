
@interface MPCAssetLoadPropertiesLocalFileEvaluation : NSObject {
    long long  _HLSContentPolicy;
    long long  _expectedAssetType;
    long long  _expectedQualityType;
    MPModelFileAsset * _fileAsset;
    long long  _fileAssetType;
    bool  _fileIsCached;
    bool  _fileIsDownloaded;
    bool  _fileIsHLS;
    bool  _fileMatchesRequiredFileFormat;
    bool  _fileMatchesRequiredQuality;
    NSString * _filePath;
    long long  _fileQualityType;
    long long  _recommendation;
    long long  _status;
}

@property (nonatomic) long long HLSContentPolicy;
@property (nonatomic) long long expectedAssetType;
@property (nonatomic) long long expectedQualityType;
@property (nonatomic, readonly, copy) MPModelFileAsset *fileAsset;
@property (nonatomic) long long fileAssetType;
@property (nonatomic) bool fileIsCached;
@property (nonatomic) bool fileIsDownloaded;
@property (nonatomic) bool fileIsHLS;
@property (nonatomic, readonly) bool fileIsValid;
@property (nonatomic) bool fileMatchesRequiredFileFormat;
@property (nonatomic) bool fileMatchesRequiredQuality;
@property (nonatomic, copy) NSString *filePath;
@property (nonatomic) long long fileQualityType;
@property (nonatomic, readonly) bool fileShouldBeUpdated;
@property (nonatomic) long long recommendation;
@property (nonatomic) long long status;

- (void).cxx_destruct;
- (long long)HLSContentPolicy;
- (id)description;
- (long long)expectedAssetType;
- (long long)expectedQualityType;
- (id)fileAsset;
- (long long)fileAssetType;
- (bool)fileIsCached;
- (bool)fileIsDownloaded;
- (bool)fileIsHLS;
- (bool)fileIsValid;
- (bool)fileMatchesRequiredFileFormat;
- (bool)fileMatchesRequiredQuality;
- (id)filePath;
- (long long)fileQualityType;
- (bool)fileShouldBeUpdated;
- (id)humanDescription;
- (id)initWithFileAsset:(id)arg1;
- (long long)recommendation;
- (void)setExpectedAssetType:(long long)arg1;
- (void)setExpectedQualityType:(long long)arg1;
- (void)setFileAssetType:(long long)arg1;
- (void)setFileIsCached:(bool)arg1;
- (void)setFileIsDownloaded:(bool)arg1;
- (void)setFileIsHLS:(bool)arg1;
- (void)setFileMatchesRequiredFileFormat:(bool)arg1;
- (void)setFileMatchesRequiredQuality:(bool)arg1;
- (void)setFilePath:(id)arg1;
- (void)setFileQualityType:(long long)arg1;
- (void)setHLSContentPolicy:(long long)arg1;
- (void)setRecommendation:(long long)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end
