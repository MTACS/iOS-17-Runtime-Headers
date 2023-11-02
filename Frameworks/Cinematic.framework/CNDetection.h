
@interface CNDetection : NSObject <NSCopying> {
    unsigned long long  _creationHash;
    PTCinematographyDetection * _internalDetection;
}

@property unsigned long long creationHash;
@property (readonly) long long detectionGroupID;
@property (readonly) long long detectionID;
@property (readonly) long long detectionType;
@property (readonly) float focusDisparity;
@property (retain) PTCinematographyDetection *internalDetection;
@property (readonly) PTCinematographyDetection *internalDetection;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedRect;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } time;

+ (id)_copyDetectionFromInternal:(id)arg1;
+ (id)_copyDetectionsFromInternal:(id)arg1;
+ (id)_copyInternalFromDetections:(id)arg1;
+ (id)accessibilityLabelForDetectionType:(long long)arg1;
+ (float)disparityInNormalizedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 sourceDisparity:(struct __CVBuffer { }*)arg2 detectionType:(long long)arg3 priorDisparity:(float)arg4;
+ (long long)invalidDetectionGroupID;
+ (long long)invalidDetectionID;
+ (bool)isValidDetectionGroupID:(long long)arg1;
+ (bool)isValidDetectionID:(long long)arg1;

- (void).cxx_destruct;
- (id)_initCopyingInternalDetection:(id)arg1;
- (id)_initTakingInternalDetection:(id)arg1;
- (bool)_integrityCheck;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)creationHash;
- (long long)detectionGroupID;
- (long long)detectionID;
- (long long)detectionType;
- (float)focusDisparity;
- (unsigned long long)hash;
- (id)initWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 detectionType:(long long)arg2 normalizedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 focusDisparity:(float)arg4;
- (id)internalDetection;
- (bool)isEqual:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedRect;
- (void)setCreationHash:(unsigned long long)arg1;
- (void)setInternalDetection:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

@end
