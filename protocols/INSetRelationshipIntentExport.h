
@protocol INSetRelationshipIntentExport <NSObject, JSExport>

@required

- (NSArray *)contactIdentifiers;
- (id)init;
- (void)setContactIdentifiers:(NSArray *)arg1;
- (void)setTargetRelationship:(INModifyRelationship *)arg1;
- (INModifyRelationship *)targetRelationship;

@end
