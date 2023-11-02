
@interface EspressoDCNEspressoOverfeatDetector : NSObject {
    double  _confidenceThreshold;
    EspressoFDOverfeatNetwork * _enet;
    double  _minBoundingBoxThreshold;
    void * face_list;
    int  localFaceMerging;
    int  tileDimension;
    int  tileSizeScaleFactor;
}

@property (nonatomic) double confidenceThreshold;
@property (nonatomic, retain) EspressoFDOverfeatNetwork *enet;
@property (nonatomic) double minBoundingBoxThreshold;

- (void).cxx_destruct;
- (void)commonInit;
- (double)compareObject:(id)arg1 withObject:(id)arg2 error:(id*)arg3;
- (void)computeBBoxUsingProb:(struct shared_ptr<Espresso::blob<float, 3>> { void *x1; struct __shared_weak_count {} *x2; })arg1 box:(struct shared_ptr<Espresso::blob<float, 3>> { void *x1; struct __shared_weak_count {} *x2; })arg2 andScalefactor:(float)arg3 padX:(float)arg4 padY:(float)arg5;
- (double)confidenceThreshold;
- (void)dealloc;
- (id)enet;
- (void)fillFaceList;
- (id)getDescription;
- (id)getFacesFromNetworkResultOriginalWidth:(float)arg1 originalHeight:(float)arg2;
- (id)init;
- (id)initWithNetwork:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (void)mergeFaceList;
- (double)minBoundingBoxThreshold;
- (void)setConfidenceThreshold:(double)arg1;
- (void)setEnet:(id)arg1;
- (void)setMinBoundingBoxThreshold:(double)arg1;

@end
