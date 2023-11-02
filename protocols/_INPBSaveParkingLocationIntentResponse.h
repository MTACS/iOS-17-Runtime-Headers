
@protocol _INPBSaveParkingLocationIntentResponse <NSObject>

@required

- (bool)hasParkingLocation;
- (bool)hasParkingNote;
- (_INPBLocation *)parkingLocation;
- (_INPBString *)parkingNote;
- (void)setParkingLocation:(_INPBLocation *)arg1;
- (void)setParkingNote:(_INPBString *)arg1;

@end
