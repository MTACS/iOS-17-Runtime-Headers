
@protocol _INPBAnnouncementRecord <NSObject>

@required

- (double)duration;
- (bool)hasDuration;
- (bool)hasIdentifier;
- (bool)hasOriginator;
- (NSString *)identifier;
- (_INPBHomeFilter *)originator;
- (void)setDuration:(double)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setOriginator:(_INPBHomeFilter *)arg1;

@end
