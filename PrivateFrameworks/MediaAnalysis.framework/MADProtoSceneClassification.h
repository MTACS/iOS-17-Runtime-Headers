
@interface MADProtoSceneClassification : PBCodable <NSCopying> {
    VCPProtoBounds * _boundingBox;
    double  _confidence;
    unsigned int  _sceneIdentifier;
}

@property (nonatomic, retain) VCPProtoBounds *boundingBox;
@property (nonatomic) double confidence;
@property (nonatomic, readonly) bool hasBoundingBox;
@property (nonatomic) unsigned int sceneIdentifier;

+ (id)protoFromPhotosSceneClassification:(id)arg1;

- (void).cxx_destruct;
- (id)boundingBox;
- (double)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBoundingBox;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)photosSceneClassification;
- (bool)readFrom:(id)arg1;
- (unsigned int)sceneIdentifier;
- (void)setBoundingBox:(id)arg1;
- (void)setConfidence:(double)arg1;
- (void)setSceneIdentifier:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
