
@interface _CLVLLocalizationMaps488Details : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _descriptorDimension;
    unsigned long long  _frameCount;
    int * _inlierIndices;
    unsigned long long  _inliersCount;
    float * _perFrameCalibrationMatrices;
    float * _perFrameDistortion;
    float * _perFrameVioPoses;
    int * _perFrameVioStatusCodes;
    float * _points2D;
    double * _points3D;
    double  _resultPoseRotation;
    double  _resultPoseTranslation;
    double  _slamOrigin;
    char * _slamTrackDescriptors;
    short * _slamTrackImageIndices;
    short * _slamTrackObservations;
    float * _slamTracks;
    float * _slamTracks2D;
    unsigned long long  _slamTracksCount;
    unsigned long long  _totalObservationsCount;
}

@property (nonatomic, readonly) unsigned long long descriptorDimension;
@property (nonatomic, readonly) unsigned long long frameCount;
@property (nonatomic, readonly) int*inlierIndices;
@property (nonatomic, readonly) unsigned long long inliersCount;
@property (nonatomic, readonly) float*perFrameCalibrationMatrices;
@property (nonatomic, readonly) float*perFrameDistortion;
@property (nonatomic, readonly) float*perFrameVioPoses;
@property (nonatomic, readonly) int*perFrameVioStatusCodes;
@property (nonatomic, readonly) float*points2D;
@property (nonatomic, readonly) double*points3D;
@property (nonatomic, readonly) double*resultPoseRotation;
@property (nonatomic, readonly) double*resultPoseTranslation;
@property (nonatomic, readonly) double*slamOrigin;
@property (nonatomic, readonly) char *slamTrackDescriptors;
@property (nonatomic, readonly) short*slamTrackImageIndices;
@property (nonatomic, readonly) short*slamTrackObservations;
@property (nonatomic, readonly) float*slamTracks;
@property (nonatomic, readonly) float*slamTracks2D;
@property (nonatomic, readonly) unsigned long long slamTracksCount;
@property (nonatomic, readonly) unsigned long long totalObservationsCount;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionWithMemberIndent:(id)arg1 endIndent:(id)arg2;
- (unsigned long long)descriptorDimension;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)frameCount;
- (id)initWithCoder:(id)arg1;
- (int*)inlierIndices;
- (unsigned long long)inliersCount;
- (float*)perFrameCalibrationMatrices;
- (float*)perFrameDistortion;
- (float*)perFrameVioPoses;
- (int*)perFrameVioStatusCodes;
- (float*)points2D;
- (double*)points3D;
- (void)resetFrames;
- (void)resetInliers;
- (void)resetSlamTracks;
- (double*)resultPoseRotation;
- (double*)resultPoseTranslation;
- (bool)setFrameCount:(unsigned long long)arg1 perFrameVioStatusCodes:(const int*)arg2 perFrameVioPoses:(const float*)arg3 perFrameCalibrationMatrices:(const float*)arg4 perFrameDistortion:(const float*)arg5;
- (bool)setInliersCount:(unsigned long long)arg1 points2D:(const float*)arg2 points3D:(const double*)arg3 inlierIndices:(const int*)arg4;
- (void)setResultPoseRotation:(const double*)arg1;
- (void)setResultPoseTranslation:(const double*)arg1;
- (void)setSlamOrigin:(const double*)arg1;
- (bool)setSlamTracksCount:(unsigned long long)arg1 slamTracks:(const float*)arg2 descriptorDimension:(unsigned long long)arg3 slamTrackDescriptors:(const char *)arg4 slamTrackObservations:(const short*)arg5 slamTracks2D:(const float*)arg6 slamTrackImageIndices:(const short*)arg7;
- (double*)slamOrigin;
- (char *)slamTrackDescriptors;
- (short*)slamTrackImageIndices;
- (short*)slamTrackObservations;
- (float*)slamTracks;
- (float*)slamTracks2D;
- (unsigned long long)slamTracksCount;
- (unsigned long long)totalObservationsCount;

@end
