
@interface EKUICreateEventIntent : INIntent

@property (nonatomic, copy) NSNumber *allDay;
@property (nonatomic, copy) INObject *endDate;
@property (nonatomic, copy) CLPlacemark *geolocation;
@property (nonatomic, copy) NSString *locationAddress;
@property (nonatomic, copy) NSString *locationName;
@property (nonatomic, copy) INObject *startDate;
@property (nonatomic, copy) NSString *title;

@end
