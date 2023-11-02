
@interface _HKAnnotatedHorizontalLineBlockCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _endPoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startPoint;
    long long  _styleIdentifier;
    <HKGraphSeriesBlockCoordinateInfo> * _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } endPoint;
@property (nonatomic, readonly) double endXValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } startPoint;
@property (nonatomic, readonly) double startXValue;
@property (nonatomic, readonly) long long styleIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HKGraphSeriesBlockCoordinateInfo> *userInfo;

- (void).cxx_destruct;
- (id)copyWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 roundToViewScale:(bool)arg2;
- (struct CGPoint { double x1; double x2; })endPoint;
- (double)endXValue;
- (unsigned long long)hash;
- (id)initWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 styleIdentifier:(long long)arg3 userInfo:(id)arg4;
- (bool)isEqual:(id)arg1;
- (struct CGPoint { double x1; double x2; })startPoint;
- (double)startXValue;
- (long long)styleIdentifier;
- (id)userInfo;

@end
