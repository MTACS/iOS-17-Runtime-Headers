
@protocol _INPBContactRelationship <NSObject>

@required

- (bool)hasName;
- (bool)hasRelation;
- (NSString *)name;
- (NSString *)relation;
- (void)setName:(NSString *)arg1;
- (void)setRelation:(NSString *)arg1;

@end
