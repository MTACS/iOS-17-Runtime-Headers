
@interface WFAirQualityProviderStation : NSObject {
    NSDate * _lastReadDate;
    CLLocation * _location;
}

@property (nonatomic, readonly) NSDate *lastReadDate;
@property (nonatomic, readonly) CLLocation *location;

- (void).cxx_destruct;
- (id)description;
- (id)initWithLocation:(id)arg1 lastReadDate:(id)arg2;
- (id)lastReadDate;
- (id)location;

@end
