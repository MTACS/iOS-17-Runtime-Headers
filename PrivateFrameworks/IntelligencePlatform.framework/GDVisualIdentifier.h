
@interface GDVisualIdentifier : NSObject <GDSubentity, GDTripleIteratorSubentityRenderer> {
    NSString * _associationReason;
    double  _confidence;
    GDRelationshipIdentifier * _relationshipIdentifier;
    NSString * _suggestedName;
    NSString * _visualIdentifier;
}

@property (nonatomic, readonly) NSString *associationReason;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) GDRelationshipIdentifier *relationshipIdentifier;
@property (nonatomic, readonly) NSString *suggestedName;
@property (nonatomic, readonly) NSString *visualIdentifier;

- (void).cxx_destruct;
- (id)associationReason;
- (double)confidence;
- (id)description;
- (id)initWithRelationshipIdTriplesIterator:(id)arg1;
- (id)relationshipIdentifier;
- (id)suggestedName;
- (id)visualIdentifier;

@end
