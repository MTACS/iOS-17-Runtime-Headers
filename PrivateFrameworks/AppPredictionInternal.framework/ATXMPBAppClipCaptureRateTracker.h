
@interface ATXMPBAppClipCaptureRateTracker : PBCodable <NSCopying> {
    NSString * _bundleId;
    int  _captureType;
    struct { 
        unsigned int captureType : 1; 
    }  _has;
    NSString * _urlHash;
}

@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic) int captureType;
@property (nonatomic, readonly) bool hasBundleId;
@property (nonatomic) bool hasCaptureType;
@property (nonatomic, readonly) bool hasUrlHash;
@property (nonatomic, retain) NSString *urlHash;

- (void).cxx_destruct;
- (int)StringAsCaptureType:(id)arg1;
- (id)bundleId;
- (int)captureType;
- (id)captureTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBundleId;
- (bool)hasCaptureType;
- (bool)hasUrlHash;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setCaptureType:(int)arg1;
- (void)setHasCaptureType:(bool)arg1;
- (void)setUrlHash:(id)arg1;
- (id)urlHash;
- (void)writeTo:(id)arg1;

@end
