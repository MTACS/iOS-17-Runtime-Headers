
@protocol _INPBSetNicknameIntentResponse <NSObject>

@required

- (bool)hasMeCard;
- (_INPBContactCard *)meCard;
- (void)setMeCard:(_INPBContactCard *)arg1;

@end
