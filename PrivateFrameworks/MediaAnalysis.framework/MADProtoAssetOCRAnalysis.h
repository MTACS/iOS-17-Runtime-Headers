
@interface MADProtoAssetOCRAnalysis : PBCodable <NSCopying> {
    double  _adjustmentVersion;
    int  _algorithmVersion;
    double  _assetAdjustmentTimestamp;
    NSString * _assetCloudIdentifier;
    NSData * _characterRecognitionData;
    NSData * _machineReadableCodeData;
}

@property (nonatomic) double adjustmentVersion;
@property (nonatomic) int algorithmVersion;
@property (nonatomic) double assetAdjustmentTimestamp;
@property (nonatomic, retain) NSString *assetCloudIdentifier;
@property (nonatomic, retain) NSData *characterRecognitionData;
@property (nonatomic, readonly) bool hasCharacterRecognitionData;
@property (nonatomic, readonly) bool hasMachineReadableCodeData;
@property (nonatomic, retain) NSData *machineReadableCodeData;

+ (id)protoFromPhotosAsset:(id)arg1;

- (void).cxx_destruct;
- (double)adjustmentVersion;
- (int)algorithmVersion;
- (double)assetAdjustmentTimestamp;
- (id)assetCloudIdentifier;
- (id)characterRecognitionData;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCharacterRecognitionData;
- (bool)hasMachineReadableCodeData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)machineReadableCodeData;
- (void)mergeFrom:(id)arg1;
- (void)persistToPhotosAsset:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAdjustmentVersion:(double)arg1;
- (void)setAlgorithmVersion:(int)arg1;
- (void)setAssetAdjustmentTimestamp:(double)arg1;
- (void)setAssetCloudIdentifier:(id)arg1;
- (void)setCharacterRecognitionData:(id)arg1;
- (void)setMachineReadableCodeData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
