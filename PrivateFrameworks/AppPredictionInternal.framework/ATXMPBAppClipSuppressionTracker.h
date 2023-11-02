
@interface ATXMPBAppClipSuppressionTracker : PBCodable <NSCopying> {
    NSString * _bundleId;
    struct { 
        unsigned int suppressionType : 1; 
    }  _has;
    int  _suppressionType;
    NSString * _urlHash;
}

@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, readonly) bool hasBundleId;
@property (nonatomic) bool hasSuppressionType;
@property (nonatomic, readonly) bool hasUrlHash;
@property (nonatomic) int suppressionType;
@property (nonatomic, retain) NSString *urlHash;

- (void).cxx_destruct;
- (int)StringAsSuppressionType:(id)arg1;
- (id)bundleId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBundleId;
- (bool)hasSuppressionType;
- (bool)hasUrlHash;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setHasSuppressionType:(bool)arg1;
- (void)setSuppressionType:(int)arg1;
- (void)setUrlHash:(id)arg1;
- (int)suppressionType;
- (id)suppressionTypeAsString:(int)arg1;
- (id)urlHash;
- (void)writeTo:(id)arg1;

@end
