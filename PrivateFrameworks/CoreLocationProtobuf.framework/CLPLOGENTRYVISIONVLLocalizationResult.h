
@interface CLPLOGENTRYVISIONVLLocalizationResult : PBCodable <NSCopying> {
    float  _confidence;
    CLPLOGENTRYVISIONVLMatrixfMxN * _covariance;
    CLPLOGENTRYVISIONVLLocalizationDebugInfo * _debugInfo;
    struct { 
        unsigned int confidence : 1; 
    }  _has;
    CLPLOGENTRYVISIONVLLocation * _location;
    CLPLOGENTRYVISIONTimeStamp * _timestamp;
    CLPLOGENTRYVISIONSimdDoubleMxN * _transform;
}

@property (nonatomic) float confidence;
@property (nonatomic, retain) CLPLOGENTRYVISIONVLMatrixfMxN *covariance;
@property (nonatomic, retain) CLPLOGENTRYVISIONVLLocalizationDebugInfo *debugInfo;
@property (nonatomic) bool hasConfidence;
@property (nonatomic, readonly) bool hasCovariance;
@property (nonatomic, readonly) bool hasDebugInfo;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic, readonly) bool hasTimestamp;
@property (nonatomic, readonly) bool hasTransform;
@property (nonatomic, retain) CLPLOGENTRYVISIONVLLocation *location;
@property (nonatomic, retain) CLPLOGENTRYVISIONTimeStamp *timestamp;
@property (nonatomic, retain) CLPLOGENTRYVISIONSimdDoubleMxN *transform;

- (void).cxx_destruct;
- (float)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)covariance;
- (id)debugInfo;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConfidence;
- (bool)hasCovariance;
- (bool)hasDebugInfo;
- (bool)hasLocation;
- (bool)hasTimestamp;
- (bool)hasTransform;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConfidence:(float)arg1;
- (void)setCovariance:(id)arg1;
- (void)setDebugInfo:(id)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setTransform:(id)arg1;
- (id)timestamp;
- (id)transform;
- (void)writeTo:(id)arg1;

@end
