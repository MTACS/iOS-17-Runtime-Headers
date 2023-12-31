
@interface VUIAppDocumentRemovePlayHistoryEvent : VUIAppDocumentUpdateEvent <NSCopying> {
    NSSet * _removedCanonicalIDs;
}

@property (nonatomic, copy) NSSet *removedCanonicalIDs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDescriptor:(id)arg1;
- (id)initWithRemovedCanonicalIDs:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)removedCanonicalIDs;
- (void)setRemovedCanonicalIDs:(id)arg1;

@end
