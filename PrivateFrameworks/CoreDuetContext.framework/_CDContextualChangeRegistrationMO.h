
@interface _CDContextualChangeRegistrationMO : NSManagedObject

@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool isActive;
@property (nonatomic) bool isMultiDeviceRegistration;
@property (nonatomic, retain) NSData *properties;

+ (void)hydrateMO:(id)arg1 fromRegistration:(id)arg2;
+ (id)materializedRegistrationFrom:(id)arg1;
+ (id)predicateForActiveRegistrationsInBootSession:(id)arg1;

@end
