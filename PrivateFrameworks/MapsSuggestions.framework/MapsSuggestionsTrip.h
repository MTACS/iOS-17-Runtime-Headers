
@interface MapsSuggestionsTrip : NSObject {
    NSDate * _endDate;
    CLPlacemark * _placemark;
    NSDate * _startDate;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) CLPlacemark *placemark;
@property (nonatomic, readonly) NSDate *startDate;

- (void).cxx_destruct;
- (id)endDate;
- (id)initWithPlacemark:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (bool)isInternational;
- (id)placemark;
- (id)startDate;

@end
