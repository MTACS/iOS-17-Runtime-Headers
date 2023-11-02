
@protocol FTObservable <NSObject>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })box;
- (float)confidence;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })frameTimestamp;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lastDetectionTimestamp;
- (long long)objectKind;

@optional

- (unsigned long long)identifier;
- (NSDictionary *)metadata;

@end
