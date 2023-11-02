
@protocol _INPBRentalCar <NSObject>

@required

- (bool)hasMake;
- (bool)hasModel;
- (bool)hasRentalCarDescription;
- (bool)hasRentalCompanyName;
- (bool)hasType;
- (NSString *)make;
- (NSString *)model;
- (NSString *)rentalCarDescription;
- (NSString *)rentalCompanyName;
- (void)setMake:(NSString *)arg1;
- (void)setModel:(NSString *)arg1;
- (void)setRentalCarDescription:(NSString *)arg1;
- (void)setRentalCompanyName:(NSString *)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)type;

@end
