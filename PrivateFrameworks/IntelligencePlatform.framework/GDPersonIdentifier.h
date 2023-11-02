
@interface GDPersonIdentifier : NSObject <GDSubentity, GDTripleIteratorSubentityRenderer> {
    NSString * _hasProfileImage;
    NSString * _identifier;
    GDRelationshipIdentifier * _relationshipIdentifier;
    NSString * _type;
}

@property (nonatomic, readonly) NSString *hasProfileImage;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) GDRelationshipIdentifier *relationshipIdentifier;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)hasProfileImage;
- (id)identifier;
- (id)initWithRelationshipIdTriplesIterator:(id)arg1;
- (id)relationshipIdentifier;
- (id)type;

@end
