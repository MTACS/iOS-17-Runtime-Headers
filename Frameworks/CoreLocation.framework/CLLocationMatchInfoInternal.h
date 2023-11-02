
@interface CLLocationMatchInfoInternal : NSObject <NSCopying> {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  fMatchCoordinate;
    double  fMatchCourse;
    NSData * fMatchDataArray;
    int  fMatchFormOfWay;
    long long  fMatchQuality;
    int  fMatchRoadClass;
    bool  fMatchShifted;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithMatchQuality:(long long)arg1 matchCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 matchCourse:(double)arg3 matchFormOfWay:(int)arg4 matchRoadClass:(int)arg5 matchShifted:(bool)arg6 matchDataArray:(id)arg7;

@end
