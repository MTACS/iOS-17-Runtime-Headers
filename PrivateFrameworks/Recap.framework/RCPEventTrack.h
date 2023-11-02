
@interface RCPEventTrack : NSObject {
    double  _endX;
    double  _startX;
    long long  _trackY;
}

@property (nonatomic) double endX;
@property (nonatomic) double startX;
@property (nonatomic) long long trackY;

- (double)endX;
- (void)setEndX:(double)arg1;
- (void)setStartX:(double)arg1;
- (void)setTrackY:(long long)arg1;
- (double)startX;
- (long long)trackY;

@end
