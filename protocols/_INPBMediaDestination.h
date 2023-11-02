
@protocol _INPBMediaDestination <NSObject>

@required

- (int)StringAsMediaDestinationType:(NSString *)arg1;
- (bool)hasMediaDestinationType;
- (bool)hasPlaylistName;
- (int)mediaDestinationType;
- (NSString *)mediaDestinationTypeAsString:(int)arg1;
- (_INPBString *)playlistName;
- (void)setHasMediaDestinationType:(bool)arg1;
- (void)setMediaDestinationType:(int)arg1;
- (void)setPlaylistName:(_INPBString *)arg1;

@end
