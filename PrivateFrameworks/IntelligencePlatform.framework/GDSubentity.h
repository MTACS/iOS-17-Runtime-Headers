
@interface GDSubentity : NSObject <GDSubentity> {
    unsigned long long  _entityClass;
    NSArray * _facts;
    GDEntityIdentifier * _parentEntityIdentifier;
    GDRelationshipIdentifier * _relationshipIdentifier;
}

@property (nonatomic, readonly) unsigned long long entityClass;
@property (nonatomic, readonly) NSArray *facts;
@property (nonatomic, readonly) GDEntityIdentifier *parentEntityIdentifier;
@property (nonatomic, readonly) GDRelationshipIdentifier *relationshipIdentifier;

- (void).cxx_destruct;
- (unsigned long long)entityClass;
- (id)facts;
- (id)initWithParentEntityIdentifier:(id)arg1 relationshipIdentifier:(id)arg2 facts:(id)arg3 entityClass:(unsigned long long)arg4;
- (id)parentEntityIdentifier;
- (id)relationshipIdentifier;

@end
