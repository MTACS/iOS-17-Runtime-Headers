
@interface GDLocationLink : NSObject <GDSubentity, GDTripleIteratorSubentityRenderer> {
    NSString * _label;
    GDEntityIdentifier * _locationEntityIdentifier;
    GDRelationshipIdentifier * _relationshipIdentifier;
}

@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) GDEntityIdentifier *locationEntityIdentifier;
@property (nonatomic, readonly) GDRelationshipIdentifier *relationshipIdentifier;

- (void).cxx_destruct;
- (id)initWithRelationshipIdTriplesIterator:(id)arg1;
- (id)label;
- (id)locationEntityIdentifier;
- (id)relationshipIdentifier;

@end
