
@protocol _INPBProperty <NSObject>

@required

- (bool)hasPayload;
- (bool)hasRole;
- (_INPBIntentSlotValue *)payload;
- (NSString *)role;
- (void)setPayload:(_INPBIntentSlotValue *)arg1;
- (void)setRole:(NSString *)arg1;

@end
