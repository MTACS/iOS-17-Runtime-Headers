
@interface HMIVideoAnalyzerBlob : HMFObject {
    float  _blobArea;
    unsigned short  _blobID;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingBox;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timeStamp;
}

@property (readonly) float blobArea;
@property (readonly) unsigned short blobID;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } timeStamp;

- (float)blobArea;
- (unsigned short)blobID;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (id)initWithBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 timeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 blobArea:(float)arg3 blobID:(unsigned short)arg4;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timeStamp;

@end
