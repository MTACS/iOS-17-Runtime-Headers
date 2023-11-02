
@interface HULocationTriggerRegion : NSObject {
    CLCircularRegion * _circularRegion;
    unsigned long long  _eventType;
    HMHome * _home;
    unsigned long long  _regionType;
}

@property (nonatomic, readonly) CLCircularRegion *circularRegion;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (nonatomic, readonly) CLCircularRegion *defaultCircularRegionForCoordinate;
@property (nonatomic, readonly) unsigned long long eventType;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) unsigned long long regionType;

+ (id)customRegionWithCircularRegion:(id)arg1;
+ (id)homeRegionWithHome:(id)arg1 eventType:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)circularRegion;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)defaultCircularRegionForCoordinate;
- (unsigned long long)eventType;
- (id)home;
- (id)identifier;
- (id)initWithRegionType:(unsigned long long)arg1 home:(id)arg2 circularRegion:(id)arg3 eventType:(unsigned long long)arg4;
- (id)location;
- (unsigned long long)regionType;

@end
