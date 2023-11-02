
@interface ADWarperMeshLensDistortionModel : NSObject <ADLensDistortionModel> {
    struct ADWarperMesh { 
        unsigned long long _type; 
        struct CGSize { 
            double width; 
            double height; 
        } _refDimensions; 
        NSData *_warperMesh; 
        float _typeOffset; 
        int _offsetX; 
        int _offsetY; 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*_cropOrigin; 
    }  _distortMesh;
    struct ADWarperMesh { 
        unsigned long long _type; 
        struct CGSize { 
            double width; 
            double height; 
        } _refDimensions; 
        NSData *_warperMesh; 
        float _typeOffset; 
        int _offsetX; 
        int _offsetY; 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*_cropOrigin; 
    }  _undistortMesh;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) long long height;
@property (readonly) Class superclass;
@property (readonly) unsigned long long type;
@property (readonly, retain) NSData *warperMesh;
@property (readonly) long long width;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)adjustForImageRotation:(long long)arg1 forDimensions:(struct CGSize { double x1; double x2; })arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)crop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromDimensions:(struct CGSize { double x1; double x2; })arg2;
- (id)dictionaryRepresentation:(bool)arg1;
- (void)distortPixels:(unsigned long long)arg1 undistortedPixels:(const struct CGPoint { double x1; double x2; }*)arg2 withCameraCalibration:(id)arg3 outDistortedPixels:(struct CGPoint { double x1; double x2; }*)arg4;
- (unsigned long long)hash;
- (long long)height;
- (id)initWithDictionary:(id)arg1;
- (id)initWithWarperMesh:(id)arg1 type:(unsigned long long)arg2 width:(long long)arg3 height:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (void)scale:(float)arg1;
- (unsigned long long)type;
- (void)undistortPixels:(unsigned long long)arg1 distortedPixels:(const struct CGPoint { double x1; double x2; }*)arg2 withCameraCalibration:(id)arg3 outUndistortedPixels:(struct CGPoint { double x1; double x2; }*)arg4;
- (id)warperMesh;
- (long long)width;

@end
