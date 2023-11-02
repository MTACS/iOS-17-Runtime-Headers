
@protocol _INPBGetCarPowerLevelStatusIntent <NSObject>

@required

- (_INPBDataString *)carName;
- (bool)hasCarName;
- (bool)hasIntentMetadata;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setCarName:(_INPBDataString *)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;

@end
