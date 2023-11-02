
@protocol _INPBSetCarLockStatusIntent <NSObject>

@required

- (_INPBDataString *)carName;
- (bool)hasCarName;
- (bool)hasIntentMetadata;
- (bool)hasLocked;
- (_INPBIntentMetadata *)intentMetadata;
- (bool)locked;
- (void)setCarName:(_INPBDataString *)arg1;
- (void)setHasLocked:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setLocked:(bool)arg1;

@end
