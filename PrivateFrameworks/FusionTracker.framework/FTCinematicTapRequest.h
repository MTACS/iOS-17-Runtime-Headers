
@interface FTCinematicTapRequest : NSObject {
    NSDictionary * _metadata;
    struct CGPoint { 
        double x; 
        double y; 
    }  _tapPoint;
    long long  _trackId;
}

@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic) struct CGPoint { double x1; double x2; } tapPoint;
@property (nonatomic) long long trackId;

- (void).cxx_destruct;
- (id)init;
- (id)metadata;
- (void)setMetadata:(id)arg1;
- (void)setTapPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTrackId:(long long)arg1;
- (struct CGPoint { double x1; double x2; })tapPoint;
- (long long)trackId;

@end
