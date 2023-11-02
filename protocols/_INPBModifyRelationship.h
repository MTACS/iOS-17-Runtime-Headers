
@protocol _INPBModifyRelationship <NSObject>

@required

- (bool)hasIsRemoval;
- (bool)hasTargetRelationship;
- (bool)isRemoval;
- (void)setHasIsRemoval:(bool)arg1;
- (void)setIsRemoval:(bool)arg1;
- (void)setTargetRelationship:(_INPBString *)arg1;
- (_INPBString *)targetRelationship;

@end
