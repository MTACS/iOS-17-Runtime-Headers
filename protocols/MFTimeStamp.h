
@protocol MFTimeStamp

@required

- (double)avTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })hostTime;
- (double)time;
- (double)userSecondsSinceReferenceDate;

@end
