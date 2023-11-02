
@interface VNTrackObjectRequest : VNTrackingRequest {
    struct CGSize { 
        double width; 
        double height; 
    }  _trackingFrameSizeInPixels;
}

@property (nonatomic) struct CGSize { double x1; double x2; } trackingFrameSizeInPixels;

+ (unsigned int)frameCVPixelBufferFormatForRequestRevision:(unsigned long long)arg1;
+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;
+ (id)trackerTypeForRequestRevision:(unsigned long long)arg1 error:(id*)arg2;

- (id)_trackingLevelOptionFromTrackingLevelEnum;
- (id)initWithDetectedObjectObservation:(id)arg1;
- (id)initWithDetectedObjectObservation:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;
- (void)setTrackingFrameSizeInPixels:(struct CGSize { double x1; double x2; })arg1;
- (void)setTrackingLevel:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })trackingFrameSizeInPixels;

@end
