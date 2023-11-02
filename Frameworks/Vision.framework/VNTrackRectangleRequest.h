
@interface VNTrackRectangleRequest : VNTrackingRequest

+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;
+ (id)trackerTypeForRequestRevision:(unsigned long long)arg1 error:(id*)arg2;

- (id)initWithRectangleObservation:(id)arg1;
- (id)initWithRectangleObservation:(id)arg1 completionHandler:(id /* block */)arg2;

@end
