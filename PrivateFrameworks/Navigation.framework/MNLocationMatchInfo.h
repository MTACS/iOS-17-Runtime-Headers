
@interface MNLocationMatchInfo : NSObject {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _matchCoordinate;
    double  _matchCourse;
    NSData * _matchDataArray;
    int  _matchFormOfWay;
    long long  _matchQuality;
    int  _matchRoadClass;
    bool  _matchShifted;
}

@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } matchCoordinate;
@property (nonatomic, readonly) double matchCourse;
@property (nonatomic, readonly) NSData *matchDataArray;
@property (nonatomic, readonly) int matchFormOfWay;
@property (nonatomic, readonly) long long matchQuality;
@property (nonatomic, readonly) int matchRoadClass;
@property (nonatomic, readonly) bool matchShifted;

- (void).cxx_destruct;
- (id)initWithMatchQuality:(long long)arg1 matchCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 matchCourse:(double)arg3 matchFormOfWay:(int)arg4 matchRoadClass:(int)arg5 matchShifted:(bool)arg6 matchDataArray:(id)arg7;
- (struct CLLocationCoordinate2D { double x1; double x2; })matchCoordinate;
- (double)matchCourse;
- (id)matchDataArray;
- (int)matchFormOfWay;
- (long long)matchQuality;
- (int)matchRoadClass;
- (bool)matchShifted;

@end
