
@interface SPMutableSafeLocation : SPSafeLocation

@property (nonatomic) long long approvalState;
@property (nonatomic, copy) CLLocation *location;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long type;

@end
