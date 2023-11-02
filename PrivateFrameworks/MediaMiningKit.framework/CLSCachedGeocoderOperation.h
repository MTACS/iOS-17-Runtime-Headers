
@interface CLSCachedGeocoderOperation : NSObject {
    double  _accuracy;
    bool  _cancelled;
    bool  _forceQuery;
    id  _location;
    CLSLocationCache * _locationCache;
    NSObject<OS_dispatch_source> * _timer;
}

+ (id)operationForceGeocoderWithLocation:(id)arg1;
+ (id)operationForceGeocoderWithLocation:(id)arg1 withAccuracy:(double)arg2;
+ (id)operationWithLocation:(id)arg1;
+ (id)operationWithLocation:(id)arg1 withAccuracy:(double)arg2;

- (void).cxx_destruct;
- (void)_executeQueryWithResultBlock:(id /* block */)arg1;
- (void)_returnsResultsForPlacemarks:(id)arg1 error:(id)arg2 resultBlock:(id /* block */)arg3;
- (void)_setupTimeOutForGeocoder:(id)arg1 resultBlock:(id /* block */)arg2;
- (void)_stopTimeOut;
- (void)_timedOutForGeocoder:(id)arg1 withResultBlock:(id /* block */)arg2;
- (id)initWithLocation:(id)arg1 withAccuracy:(double)arg2;
- (id)performSynchronouslyWithError:(id*)arg1;

@end
