
@interface HKDateZoomScale : NSObject <HKZoomScale> {
    NSCalendar * _currentCalendar;
    long long  _previousZoom;
    double  _previousZoomScale;
    HKValueRange * _unitZoomScaleValueRange;
}

@property (nonatomic, retain) NSCalendar *currentCalendar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentCalendar;
- (id)initWithCurrentCalendar:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)maxDate;
- (id)minDate;
- (void)setCurrentCalendar:(id)arg1;
- (void)setUnitZoomScaleValueRangeForTimeInterval:(double)arg1;
- (id)unitZoomScaleValueRange;
- (long long)zoomForZoomScale:(double)arg1;
- (double)zoomScaleForRange:(struct HKRange { double x1; double x2; })arg1;

@end
