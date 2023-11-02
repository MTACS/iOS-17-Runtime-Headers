
@interface BCAnnotationsProtoBook : PBCodable <NSCopying> {
    NSMutableArray * _annotations;
    NSString * _appVersion;
    NSString * _assetID;
    NSString * _assetVersion;
}

@property (nonatomic, retain) NSMutableArray *annotations;
@property (nonatomic, retain) NSString *appVersion;
@property (nonatomic, retain) NSString *assetID;
@property (nonatomic, retain) NSString *assetVersion;
@property (nonatomic, readonly) bool hasAssetVersion;

+ (Class)annotationType;

- (void).cxx_destruct;
- (void)addAnnotation:(id)arg1;
- (id)annotationAtIndex:(unsigned long long)arg1;
- (id)annotations;
- (unsigned long long)annotationsCount;
- (id)appVersion;
- (id)assetID;
- (id)assetVersion;
- (void)clearAnnotations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAssetVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAnnotations:(id)arg1;
- (void)setAppVersion:(id)arg1;
- (void)setAssetID:(id)arg1;
- (void)setAssetVersion:(id)arg1;
- (void)writeTo:(id)arg1;

@end
