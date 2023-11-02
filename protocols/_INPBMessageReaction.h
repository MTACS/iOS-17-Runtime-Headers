
@protocol _INPBMessageReaction <NSObject>

@required

- (int)StringAsReactionType:(NSString *)arg1;
- (bool)hasReactionDescription;
- (bool)hasReactionType;
- (bool)hasReferencedMessage;
- (NSString *)reactionDescription;
- (int)reactionType;
- (NSString *)reactionTypeAsString:(int)arg1;
- (_INPBMessage *)referencedMessage;
- (void)setHasReactionType:(bool)arg1;
- (void)setReactionDescription:(NSString *)arg1;
- (void)setReactionType:(int)arg1;
- (void)setReferencedMessage:(_INPBMessage *)arg1;

@end
