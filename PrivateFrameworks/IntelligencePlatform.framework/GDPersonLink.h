
@interface GDPersonLink : NSObject <GDSubentity, GDTripleIteratorSubentityRenderer> {
    GDEntityIdentifier * _linkedPersonEntityIdentifier;
    GDRelationshipIdentifier * _relationshipIdentifier;
    NSString * _relationshipLabel;
}

@property (nonatomic, readonly) GDEntityIdentifier *linkedPersonEntityIdentifier;
@property (nonatomic, readonly) GDRelationshipIdentifier *relationshipIdentifier;
@property (nonatomic, readonly) NSString *relationshipLabel;

- (void).cxx_destruct;
- (id)initWithRelationshipIdTriplesIterator:(id)arg1;
- (id)linkedPersonEntityIdentifier;
- (id)relationshipIdentifier;
- (id)relationshipLabel;

@end
