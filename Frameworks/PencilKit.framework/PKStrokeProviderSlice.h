
@interface PKStrokeProviderSlice : NSObject <CHStroke> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    CHEncodedStrokeIdentifier * _encodedStrokeIdentifier;
    PKStrokeProviderSliceIdentifier * _identifier;
    PKStroke * _stroke;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CHEncodedStrokeIdentifier *encodedStrokeIdentifier;
@property (nonatomic, readonly) double endTimestamp;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKStrokeProviderSliceIdentifier *identifier;
@property (nonatomic, readonly) bool isFinished;
@property (nonatomic, readonly) double startTimestamp;
@property (nonatomic, readonly) PKStroke *stroke;
@property (nonatomic, readonly) unsigned long long strokeAttributes;
@property (nonatomic, readonly) <CHStrokeIdentifier> *strokeIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_firstPointIndex;
- (struct CGPoint { double x1; double x2; })_interpolatedPointForSplineSegment:(long long)arg1 t:(double)arg2;
- (double)_interpolatedTimeForSplineSegment:(long long)arg1 t:(double)arg2;
- (long long)_lastPointIndex;
- (double)_lengthOfSplineSegment:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })_splineControlPoint:(long long)arg1;
- (double)_strokeLength;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (long long)compareTo:(id)arg1;
- (id)description;
- (id)encodedStrokeIdentifier;
- (double)endTimestamp;
- (void)enumeratePointsWithDistanceStep:(double)arg1 usingBlock:(id /* block */)arg2;
- (void)enumeratePointsWithTimestep:(double)arg1 usingBlock:(id /* block */)arg2;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithStroke:(id)arg1 tStart:(double)arg2 tEnd:(double)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isFinished;
- (double)startTimestamp;
- (id)stroke;
- (unsigned long long)strokeAttributes;
- (id)strokeIdentifier;

@end
