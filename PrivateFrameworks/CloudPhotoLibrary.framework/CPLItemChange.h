
@interface CPLItemChange : CPLRecordChange <NSCopying, NSSecureCoding> {
    NSArray * _containerRelations;
}

@property (nonatomic, copy) NSArray *containerRelations;

+ (bool)cplShouldIgnorePropertyForCoding:(id)arg1;

- (void).cxx_destruct;
- (id)containerDescription;
- (id)containerRelationChangesComparedToRelationEnumerator:(id)arg1 error:(id*)arg2;
- (id)containerRelations;
- (id)init;
- (id)propertiesForChangeType:(unsigned long long)arg1;
- (void)setContainerRelations:(id)arg1;

@end
