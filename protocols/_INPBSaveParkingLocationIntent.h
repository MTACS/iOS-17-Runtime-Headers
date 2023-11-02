
@protocol _INPBSaveParkingLocationIntent <NSObject>

@required

- (bool)hasIntentMetadata;
- (bool)hasParkingLocation;
- (bool)hasParkingNote;
- (_INPBIntentMetadata *)intentMetadata;
- (_INPBLocation *)parkingLocation;
- (_INPBString *)parkingNote;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setParkingLocation:(_INPBLocation *)arg1;
- (void)setParkingNote:(_INPBString *)arg1;

@end
