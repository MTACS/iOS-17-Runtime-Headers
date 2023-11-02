
@protocol JFXMediaDataReader <NSObject>

@required

- (bool)beginReading;
- (bool)beginReadingAtTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (NSError *)error;
- (bool)isScrubbing;
- (NSString *)name;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })readableTimeRange;
- (void)setIsScrubbing:(bool)arg1;
- (unsigned long long)signPostID;
- (long long)status;

@end
