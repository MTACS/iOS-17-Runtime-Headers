
@interface VisionCoreWarpTransform : NSObject <VisionCoreUUIDProviding> {
    NSUUID * _UUID;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _affineTransform;
    int  _groupID;
    float  _reprojectionError;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _warpTransform;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } affineTransform;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int groupID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) float reprojectionError;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } warpTransform;

- (void).cxx_destruct;
- (id)UUID;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })affineTransform;
- (int)groupID;
- (id)initWithWarpTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 affineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 UUID:(id)arg3 reprojectionError:(float)arg4;
- (id)initWithWarpTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 affineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 UUID:(id)arg3 reprojectionError:(float)arg4 groupID:(int)arg5;
- (float)reprojectionError;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })warpTransform;

@end
