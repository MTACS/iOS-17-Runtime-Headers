
@protocol _INPBSaveProfileInCarIntent <NSObject>

@required

- (bool)hasIntentMetadata;
- (bool)hasProfileName;
- (bool)hasProfileNumber;
- (_INPBIntentMetadata *)intentMetadata;
- (_INPBString *)profileName;
- (_INPBInteger *)profileNumber;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setProfileName:(_INPBString *)arg1;
- (void)setProfileNumber:(_INPBInteger *)arg1;

@end
