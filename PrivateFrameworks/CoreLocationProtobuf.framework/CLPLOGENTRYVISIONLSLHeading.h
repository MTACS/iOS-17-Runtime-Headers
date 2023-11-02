
@interface CLPLOGENTRYVISIONLSLHeading : PBCodable <NSCopying> {
    double  _confidence;
    int  _globalReferenceFrame;
    struct { 
        unsigned int confidence : 1; 
        unsigned int globalReferenceFrame : 1; 
    }  _has;
    CLPLOGENTRYVISIONLSLLocation * _location;
    CLPLOGENTRYVISIONSimdDoubleMxN * _rotationFromGlobalToCameraFrame;
    CLPLOGENTRYVISIONSimdDoubleMxN * _rotationFromGlobalToDeviceFrame;
    CLPLOGENTRYVISIONSimdDoubleM * _rotationalAccuracyInRadians;
    CLPLOGENTRYVISIONLSLHeadingSupplInfo * _supplemantaryInfo;
    CLPLOGENTRYVISIONTimeStamp * _timestamp;
}

@property (nonatomic) double confidence;
@property (nonatomic) int globalReferenceFrame;
@property (nonatomic) bool hasConfidence;
@property (nonatomic) bool hasGlobalReferenceFrame;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic, readonly) bool hasRotationFromGlobalToCameraFrame;
@property (nonatomic, readonly) bool hasRotationFromGlobalToDeviceFrame;
@property (nonatomic, readonly) bool hasRotationalAccuracyInRadians;
@property (nonatomic, readonly) bool hasSupplemantaryInfo;
@property (nonatomic, readonly) bool hasTimestamp;
@property (nonatomic, retain) CLPLOGENTRYVISIONLSLLocation *location;
@property (nonatomic, retain) CLPLOGENTRYVISIONSimdDoubleMxN *rotationFromGlobalToCameraFrame;
@property (nonatomic, retain) CLPLOGENTRYVISIONSimdDoubleMxN *rotationFromGlobalToDeviceFrame;
@property (nonatomic, retain) CLPLOGENTRYVISIONSimdDoubleM *rotationalAccuracyInRadians;
@property (nonatomic, retain) CLPLOGENTRYVISIONLSLHeadingSupplInfo *supplemantaryInfo;
@property (nonatomic, retain) CLPLOGENTRYVISIONTimeStamp *timestamp;

- (void).cxx_destruct;
- (int)StringAsGlobalReferenceFrame:(id)arg1;
- (double)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)globalReferenceFrame;
- (id)globalReferenceFrameAsString:(int)arg1;
- (bool)hasConfidence;
- (bool)hasGlobalReferenceFrame;
- (bool)hasLocation;
- (bool)hasRotationFromGlobalToCameraFrame;
- (bool)hasRotationFromGlobalToDeviceFrame;
- (bool)hasRotationalAccuracyInRadians;
- (bool)hasSupplemantaryInfo;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)rotationFromGlobalToCameraFrame;
- (id)rotationFromGlobalToDeviceFrame;
- (id)rotationalAccuracyInRadians;
- (void)setConfidence:(double)arg1;
- (void)setGlobalReferenceFrame:(int)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)setHasGlobalReferenceFrame:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setRotationFromGlobalToCameraFrame:(id)arg1;
- (void)setRotationFromGlobalToDeviceFrame:(id)arg1;
- (void)setRotationalAccuracyInRadians:(id)arg1;
- (void)setSupplemantaryInfo:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (id)supplemantaryInfo;
- (id)timestamp;
- (void)writeTo:(id)arg1;

@end
