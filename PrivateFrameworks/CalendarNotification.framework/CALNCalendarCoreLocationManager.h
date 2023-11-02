
@interface CALNCalendarCoreLocationManager : NSObject {
    <CALNCoreLocationProvider> * _coreLocationProvider;
}

@property (nonatomic, readonly) bool allowsLocationAlerts;
@property (nonatomic, readonly) <CALNCoreLocationProvider> *coreLocationProvider;

- (void).cxx_destruct;
- (bool)allowsLocationAlerts;
- (id)coreLocationProvider;
- (id)initWithCoreLocationProvider:(id)arg1;
- (void)markAsHavingReceivedLocation;

@end
