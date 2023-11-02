
@protocol _INPBSetProfileInCarIntent <NSObject>

@required

- (_INPBDataString *)carName;
- (bool)defaultProfile;
- (bool)hasCarName;
- (bool)hasDefaultProfile;
- (bool)hasIntentMetadata;
- (bool)hasProfileName;
- (bool)hasProfileNumber;
- (_INPBIntentMetadata *)intentMetadata;
- (_INPBString *)profileName;
- (_INPBInteger *)profileNumber;
- (void)setCarName:(_INPBDataString *)arg1;
- (void)setDefaultProfile:(bool)arg1;
- (void)setHasDefaultProfile:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setProfileName:(_INPBString *)arg1;
- (void)setProfileNumber:(_INPBInteger *)arg1;

@end
