
@interface GDSoftwareLink : NSObject <GDSubentity, GDTripleIteratorSubentityRenderer> {
    NSString * _conversationIdentifier;
    NSString * _identifierType;
    GDRelationshipIdentifier * _relationshipIdentifier;
    GDEntityIdentifier * _softwareEntityIdentifier;
}

@property (nonatomic, readonly) NSString *conversationIdentifier;
@property (nonatomic, readonly) NSString *identifierType;
@property (nonatomic, readonly) GDRelationshipIdentifier *relationshipIdentifier;
@property (nonatomic, readonly) GDEntityIdentifier *softwareEntityIdentifier;

- (void).cxx_destruct;
- (id)conversationIdentifier;
- (id)identifierType;
- (id)initWithRelationshipIdTriplesIterator:(id)arg1;
- (id)relationshipIdentifier;
- (id)softwareEntityIdentifier;

@end
