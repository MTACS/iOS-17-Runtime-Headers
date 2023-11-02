
@interface _PFCameraMetadataAVMetadataObject : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    int  _confidence;
    NSString * _type;
}

@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (readonly) int confidence;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } time;
@property (readonly) NSString *type;

+ (id)catBodyObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1;
+ (id)dogBodyObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1;
+ (id)humanBodyObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1;
+ (id)humanFaceObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1;
+ (id)objectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 type:(id)arg2;
+ (id)salientObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (int)confidence;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)initWithType:(id)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 confidence:(int)arg3;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (id)type;

@end
