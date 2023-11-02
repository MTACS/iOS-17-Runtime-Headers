
@interface VNFaceLandmarks2D : VNFaceLandmarks {
    VNFaceLandmarkRegion2D * _allPoints;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _allPointsLock;
    unsigned long long  _constellation;
    VNFaceLandmarkRegion2D * _faceContour;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _faceContourLock;
    VNFaceLandmarkRegion2D * _innerLips;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _innerLipsLock;
    VNFaceLandmarkRegion2D * _leftEye;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _leftEyeLock;
    VNFaceLandmarkRegion2D * _leftEyebrow;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _leftEyebrowLock;
    VNFaceLandmarkRegion2D * _leftPupil;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _leftPupilLock;
    VNFaceLandmarkRegion2D * _medianLine;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _medianLineLock;
    VNFaceLandmarkRegion2D * _nose;
    VNFaceLandmarkRegion2D * _noseCrest;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _noseCrestLock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _noseLock;
    VNFaceLandmarkRegion2D * _outerLips;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _outerLipsLock;
    NSArray * _precisionEstimatesPerPoint;
    VNFaceLandmarkRegion2D * _rightEye;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _rightEyeLock;
    VNFaceLandmarkRegion2D * _rightEyebrow;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _rightEyebrowLock;
    VNFaceLandmarkRegion2D * _rightPupil;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _rightPupilLock;
}

@property (readonly) VNFaceLandmarkRegion2D *allPoints;
@property (readonly) unsigned long long constellation;
@property (readonly) VNFaceLandmarkRegion2D *faceContour;
@property (readonly) VNFaceLandmarkRegion2D *innerLips;
@property (readonly) VNFaceLandmarkRegion2D *leftEye;
@property (readonly) VNFaceLandmarkRegion2D *leftEyebrow;
@property (readonly) VNFaceLandmarkRegion2D *leftPupil;
@property (readonly) VNFaceLandmarkRegion2D *medianLine;
@property (readonly) VNFaceLandmarkRegion2D *nose;
@property (readonly) VNFaceLandmarkRegion2D *noseCrest;
@property (readonly) VNFaceLandmarkRegion2D *outerLips;
@property (copy) NSArray *precisionEstimatesPerPoint;
@property (readonly) VNFaceLandmarkRegion2D *rightEye;
@property (readonly) VNFaceLandmarkRegion2D *rightEyebrow;
@property (readonly) VNFaceLandmarkRegion2D *rightPupil;

+ (id)_createNSArrayFrom:(id)arg1 withPointIndices:(const int*)arg2 andPointCount:(unsigned long long)arg3;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;
+ (unsigned long long)landmarkPointSizeInBytes;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_createFaceLandmarks2DRegionOfPoints:(long long)arg1 fromPointIndexes:(const int*)arg2 andPointCount:(unsigned long long)arg3;
- (void*)_createPointArray:(const int*)arg1 count:(unsigned long long)arg2;
- (void)_initLocks;
- (id)allPoints;
- (unsigned long long)constellation;
- (void)encodeWithCoder:(id)arg1;
- (id)faceContour;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 pointsData:(id)arg2 pointCount:(unsigned long long)arg3 constellation:(unsigned long long)arg4 precisionEstimatesPerPoint:(id)arg5 userFacingBBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 alignedBBox:(struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x_1_1_1; float x_1_1_2; } x1; struct _Geometry2D_size2D_ { float x_2_1_1; float x_2_1_2; } x2; })arg7 landmarkScore:(float)arg8;
- (id)innerLips;
- (bool)isEqual:(id)arg1;
- (id)leftEye;
- (id)leftEyebrow;
- (id)leftPupil;
- (id)medianLine;
- (id)nose;
- (id)noseCrest;
- (id)outerLips;
- (id)precisionEstimatesPerPoint;
- (id)rightEye;
- (id)rightEyebrow;
- (id)rightPupil;
- (void)setPrecisionEstimatesPerPoint:(id)arg1;

@end
