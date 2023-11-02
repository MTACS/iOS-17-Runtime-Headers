
@protocol _INPBRideVehicle <NSObject>

@required

- (bool)hasLocation;
- (bool)hasManufacturer;
- (bool)hasMapAnnotationImage;
- (bool)hasModel;
- (bool)hasRegistrationPlate;
- (GEOLocation *)location;
- (NSString *)manufacturer;
- (_INPBImageValue *)mapAnnotationImage;
- (NSString *)model;
- (NSString *)registrationPlate;
- (void)setLocation:(GEOLocation *)arg1;
- (void)setManufacturer:(NSString *)arg1;
- (void)setMapAnnotationImage:(_INPBImageValue *)arg1;
- (void)setModel:(NSString *)arg1;
- (void)setRegistrationPlate:(NSString *)arg1;

@end
