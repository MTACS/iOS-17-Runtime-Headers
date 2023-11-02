
@interface NSRelationshipStoreMapping : NSPropertyStoreMapping {
    NSString * _destinationEntityExternalName;
    NSArray * _foreignKeys;
    unsigned int  _joinSemantic;
    NSArray * _joins;
}

- (void)dealloc;
- (id)destinationEntityExternalName;
- (id)foreignKeys;
- (bool)isEqual:(id)arg1;
- (unsigned int)joinSemantic;
- (id)joins;
- (id)relationship;

@end
