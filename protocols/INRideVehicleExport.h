
@protocol INRideVehicleExport <NSObject, JSExport>

@required

- (id)init;
- (CLLocation *)location;
- (NSString *)manufacturer;
- (INImage *)mapAnnotationImage;
- (NSString *)model;
- (NSString *)registrationPlate;
- (void)setLocation:(CLLocation *)arg1;
- (void)setManufacturer:(NSString *)arg1;
- (void)setMapAnnotationImage:(INImage *)arg1;
- (void)setModel:(NSString *)arg1;
- (void)setRegistrationPlate:(NSString *)arg1;

@end
