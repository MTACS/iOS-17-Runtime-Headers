
@interface MediaPlaybackCore.EventTime : _TtCs12_SwiftObject <MFTimeStamp> {
    void avTime;
    void hostTime;
    void time;
    void type;
    void userSecondsSinceReferenceDate;
}

@property (nonatomic, readonly) double avTime;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } hostTime;
@property (nonatomic) double time;
@property (nonatomic, readonly) double userSecondsSinceReferenceDate;

- (double)avTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })hostTime;
- (void)setTime:(double)arg1;
- (double)time;
- (double)userSecondsSinceReferenceDate;

@end
