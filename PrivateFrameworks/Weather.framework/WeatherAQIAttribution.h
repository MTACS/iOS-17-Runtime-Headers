
@interface WeatherAQIAttribution : NSObject {
    UIImage * _cachedLogoImage;
    long long  _dataOrigination;
    WFGeocodeRequest * _geocodeRequest;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _reverseGeocodingQueue;
    NSDate * _stationLastReadDate;
    CLLocation * _stationLocation;
    NSString * _stationLocationName;
}

@property (nonatomic, readonly) UIImage *cachedLogoImage;
@property (nonatomic) long long dataOrigination;
@property (nonatomic, retain) WFGeocodeRequest *geocodeRequest;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *reverseGeocodingQueue;
@property (nonatomic, readonly) NSDate *stationLastReadDate;
@property (nonatomic, readonly) CLLocation *stationLocation;
@property (nonatomic, retain) NSString *stationLocationName;

- (void).cxx_destruct;
- (id)cachedLogoImage;
- (long long)dataOrigination;
- (id)geocodeRequest;
- (id)initWithFoundationAttribution:(id)arg1;
- (bool)isValid;
- (id)name;
- (void)reverseGeocodeStationLocation:(id /* block */)arg1;
- (id)reverseGeocodingQueue;
- (void)setDataOrigination:(long long)arg1;
- (void)setGeocodeRequest:(id)arg1;
- (void)setName:(id)arg1;
- (void)setReverseGeocodingQueue:(id)arg1;
- (void)setStationLocationName:(id)arg1;
- (id)stationLastReadDate;
- (id)stationLocation;
- (id)stationLocationName;

@end
