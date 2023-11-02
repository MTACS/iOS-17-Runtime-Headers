
@protocol _INPBSetNicknameIntent <NSObject>

@required

- (bool)hasIntentMetadata;
- (bool)hasTargetNickname;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setTargetNickname:(_INPBModifyNickname *)arg1;
- (_INPBModifyNickname *)targetNickname;

@end
