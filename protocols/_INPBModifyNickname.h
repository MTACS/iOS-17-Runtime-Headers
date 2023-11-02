
@protocol _INPBModifyNickname <NSObject>

@required

- (bool)hasIsRemoval;
- (bool)hasTargetNickname;
- (bool)isRemoval;
- (void)setHasIsRemoval:(bool)arg1;
- (void)setIsRemoval:(bool)arg1;
- (void)setTargetNickname:(_INPBString *)arg1;
- (_INPBString *)targetNickname;

@end
