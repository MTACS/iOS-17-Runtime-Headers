
@protocol _INPBStartVideoCallIntentResponse <NSObject>

@required

- (int)StringAsAudioRoute:(NSString *)arg1;
- (void)addTargetContacts:(NSString *)arg1;
- (int)audioRoute;
- (NSString *)audioRouteAsString:(int)arg1;
- (void)clearTargetContacts;
- (bool)hasAudioRoute;
- (bool)hasMetrics;
- (bool)hasStatus;
- (_INPBCallMetrics *)metrics;
- (void)setAudioRoute:(int)arg1;
- (void)setHasAudioRoute:(bool)arg1;
- (void)setMetrics:(_INPBCallMetrics *)arg1;
- (void)setStatus:(NSString *)arg1;
- (void)setTargetContacts:(NSArray *)arg1;
- (NSString *)status;
- (NSArray *)targetContacts;
- (NSString *)targetContactsAtIndex:(unsigned long long)arg1;
- (unsigned long long)targetContactsCount;

@end
