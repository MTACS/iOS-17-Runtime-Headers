
@protocol _INPBDeleteEventIntent <NSObject>

@required

- (bool)deleteAllOccurrences;
- (bool)hasDeleteAllOccurrences;
- (bool)hasIntentMetadata;
- (bool)hasTargetEventIdentifier;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setDeleteAllOccurrences:(bool)arg1;
- (void)setHasDeleteAllOccurrences:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setTargetEventIdentifier:(NSString *)arg1;
- (NSString *)targetEventIdentifier;

@end
