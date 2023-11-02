
@protocol HDSyncEntityProvider <NSObject>

@required

- (NSArray *)orderedSyncEntities;
- (NSString *)syncSchemaIdentifier;

@end
