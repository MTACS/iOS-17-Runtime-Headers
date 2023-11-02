
@interface HMIPersonBlob : HMFObject {
    NSUUID * _blobID;
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
    HMIFaceprint * _faceprint;
    NSMutableIndexSet * _personIndices;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timeStamp;
    HMITorsoprint * _torsoprint;
}

@property (retain) NSUUID *blobID;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (readonly) HMIFaceprint *faceprint;
@property (retain) NSMutableIndexSet *personIndices;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } timeStamp;
@property (readonly) HMITorsoprint *torsoprint;

- (void).cxx_destruct;
- (id)blobID;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (id)faceprint;
- (id)initWithNewPersonEvent:(id)arg1 timeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (bool)isExpiredAtTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)personIndices;
- (void)setBlobID:(id)arg1;
- (void)setPersonIndices:(id)arg1;
- (id)shortDescription;
- (float)similarityToPersonBlob:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timeStamp;
- (id)torsoprint;
- (void)trackPersonBlob:(id)arg1;

@end
