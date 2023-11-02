
@protocol _INPBCallGroup <NSObject>

@required

- (_INPBString *)groupId;
- (_INPBString *)groupName;
- (bool)hasGroupId;
- (bool)hasGroupName;
- (void)setGroupId:(_INPBString *)arg1;
- (void)setGroupName:(_INPBString *)arg1;

@end
