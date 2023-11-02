
@interface VNFaceLandmarks3D : VNFaceLandmarks {
    VNFaceLandmarkRegion3D * _allPoints;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _allPointsLock;
    VNFaceLandmarkRegion3D * _faceContour;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _faceContourLock;
    VNFaceLandmarkRegion3D * _innerLips;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _innerLipsLock;
    VNFaceLandmarkRegion3D * _leftEye;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _leftEyeLock;
    VNFaceLandmarkRegion3D * _leftEyebrow;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _leftEyebrowLock;
    VNFaceLandmarkRegion3D * _medianLine;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _medianLineLock;
    VNFaceLandmarkRegion3D * _nose;
    VNFaceLandmarkRegion3D * _noseCrest;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _noseCrestLock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _noseLock;
    VNFaceLandmarkRegion3D * _outerLips;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _outerLipsLock;
    VNFaceLandmarkRegion3D * _rightEye;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _rightEyeLock;
    VNFaceLandmarkRegion3D * _rightEyebrow;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _rightEyebrowLock;
}

@property (readonly) VNFaceLandmarkRegion3D *allPoints;
@property (readonly) VNFaceLandmarkRegion3D *faceContour;
@property (readonly) VNFaceLandmarkRegion3D *innerLips;
@property (readonly) VNFaceLandmarkRegion3D *leftEye;
@property (readonly) VNFaceLandmarkRegion3D *leftEyebrow;
@property (readonly) VNFaceLandmarkRegion3D *medianLine;
@property (readonly) VNFaceLandmarkRegion3D *nose;
@property (readonly) VNFaceLandmarkRegion3D *noseCrest;
@property (readonly) VNFaceLandmarkRegion3D *outerLips;
@property (readonly) VNFaceLandmarkRegion3D *rightEye;
@property (readonly) VNFaceLandmarkRegion3D *rightEyebrow;

+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;
+ (unsigned long long)landmarkPointSizeInBytes;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void*)_createPointArray:(const int*)arg1 count:(unsigned long long)arg2;
- (void)_initLocks;
- (id)allPoints;
- (void)encodeWithCoder:(id)arg1;
- (id)faceContour;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 pointsData:(id)arg2 pointCount:(unsigned long long)arg3 userFacingBBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 alignedBBox:(struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x_1_1_1; float x_1_1_2; } x1; struct _Geometry2D_size2D_ { float x_2_1_1; float x_2_1_2; } x2; })arg5 landmarkScore:(float)arg6;
- (id)innerLips;
- (id)leftEye;
- (id)leftEyebrow;
- (id)medianLine;
- (id)nose;
- (id)noseCrest;
- (id)outerLips;
- (id)rightEye;
- (id)rightEyebrow;

@end
