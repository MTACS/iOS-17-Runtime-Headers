
@protocol _INPBPayloadSuccess <NSObject>

@required

- (bool)hasResolvedKeyPath;
- (bool)hasResolvedValue;
- (NSString *)resolvedKeyPath;
- (_INPBIntentSlotValue *)resolvedValue;
- (void)setResolvedKeyPath:(NSString *)arg1;
- (void)setResolvedValue:(_INPBIntentSlotValue *)arg1;

@end
