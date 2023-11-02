
@interface VNTrackHomographicImageRegistrationRequest : VNStatefulRequest {
    VNImageBuffer * _previousImageBuffer;
    VNImageRegistrationSignature * _previousImageRegistrationSignature;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _previousRegionOfInterest;
    unsigned long long  _previousRequestRevision;
}

@property (readonly, copy) NSArray *results;

+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;

- (void).cxx_destruct;
- (bool)allowsCachingOfResults;
- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
