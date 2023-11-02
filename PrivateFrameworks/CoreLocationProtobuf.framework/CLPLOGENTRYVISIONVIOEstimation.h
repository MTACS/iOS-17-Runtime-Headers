
@interface CLPLOGENTRYVISIONVIOEstimation : PBCodable <NSCopying> {
    CLPLOGENTRYVISIONCGSize * _cameraImageResolution;
    CLPLOGENTRYVISIONSimdFloatMxN * _cameraIntrinsics;
    CLPLOGENTRYVISIONSimdFloatMxN * _cameraPose;
    struct { 
        unsigned int trackingState : 1; 
    }  _has;
    NSData * _inertialCovariance;
    CLPLOGENTRYVISIONVIOInertialCovarianceInfo * _inertialCovarianceInfo;
    NSData * _inertialState;
    CLPLOGENTRYVISIONVIOInertialStateInfo * _inertialStateInfo;
    CLPLOGENTRYVISIONTimeStamp * _originTimestamp;
    CLPLOGENTRYVISIONTimeStamp * _timestamp;
    int  _trackingState;
}

@property (nonatomic, retain) CLPLOGENTRYVISIONCGSize *cameraImageResolution;
@property (nonatomic, retain) CLPLOGENTRYVISIONSimdFloatMxN *cameraIntrinsics;
@property (nonatomic, retain) CLPLOGENTRYVISIONSimdFloatMxN *cameraPose;
@property (nonatomic, readonly) bool hasCameraImageResolution;
@property (nonatomic, readonly) bool hasCameraIntrinsics;
@property (nonatomic, readonly) bool hasCameraPose;
@property (nonatomic, readonly) bool hasInertialCovariance;
@property (nonatomic, readonly) bool hasInertialCovarianceInfo;
@property (nonatomic, readonly) bool hasInertialState;
@property (nonatomic, readonly) bool hasInertialStateInfo;
@property (nonatomic, readonly) bool hasOriginTimestamp;
@property (nonatomic, readonly) bool hasTimestamp;
@property (nonatomic) bool hasTrackingState;
@property (nonatomic, retain) NSData *inertialCovariance;
@property (nonatomic, retain) CLPLOGENTRYVISIONVIOInertialCovarianceInfo *inertialCovarianceInfo;
@property (nonatomic, retain) NSData *inertialState;
@property (nonatomic, retain) CLPLOGENTRYVISIONVIOInertialStateInfo *inertialStateInfo;
@property (nonatomic, retain) CLPLOGENTRYVISIONTimeStamp *originTimestamp;
@property (nonatomic, retain) CLPLOGENTRYVISIONTimeStamp *timestamp;
@property (nonatomic) int trackingState;

- (void).cxx_destruct;
- (int)StringAsTrackingState:(id)arg1;
- (id)cameraImageResolution;
- (id)cameraIntrinsics;
- (id)cameraPose;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCameraImageResolution;
- (bool)hasCameraIntrinsics;
- (bool)hasCameraPose;
- (bool)hasInertialCovariance;
- (bool)hasInertialCovarianceInfo;
- (bool)hasInertialState;
- (bool)hasInertialStateInfo;
- (bool)hasOriginTimestamp;
- (bool)hasTimestamp;
- (bool)hasTrackingState;
- (unsigned long long)hash;
- (id)inertialCovariance;
- (id)inertialCovarianceInfo;
- (id)inertialState;
- (id)inertialStateInfo;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)originTimestamp;
- (bool)readFrom:(id)arg1;
- (void)setCameraImageResolution:(id)arg1;
- (void)setCameraIntrinsics:(id)arg1;
- (void)setCameraPose:(id)arg1;
- (void)setHasTrackingState:(bool)arg1;
- (void)setInertialCovariance:(id)arg1;
- (void)setInertialCovarianceInfo:(id)arg1;
- (void)setInertialState:(id)arg1;
- (void)setInertialStateInfo:(id)arg1;
- (void)setOriginTimestamp:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setTrackingState:(int)arg1;
- (id)timestamp;
- (int)trackingState;
- (id)trackingStateAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
