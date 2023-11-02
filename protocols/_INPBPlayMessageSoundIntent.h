
@protocol _INPBPlayMessageSoundIntent <NSObject>

@required

- (int)StringAsSoundType:(NSString *)arg1;
- (bool)hasIntentMetadata;
- (bool)hasMessageIdentifier;
- (bool)hasSoundType;
- (_INPBIntentMetadata *)intentMetadata;
- (NSString *)messageIdentifier;
- (void)setHasSoundType:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setMessageIdentifier:(NSString *)arg1;
- (void)setSoundType:(int)arg1;
- (int)soundType;
- (NSString *)soundTypeAsString:(int)arg1;

@end
