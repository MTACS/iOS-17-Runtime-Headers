
@interface PGGraphBuilderInsertedIdentifiedPerson : NSObject {
    NSDate * _anniversaryDate;
    NSDate * _birthdayDate;
    PGGraphPersonNode * _personNode;
    unsigned long long  _relationship;
}

@property (nonatomic, retain) NSDate *anniversaryDate;
@property (nonatomic, retain) NSDate *birthdayDate;
@property (readonly) PGGraphPersonNode *personNode;
@property (nonatomic) unsigned long long relationship;

- (void).cxx_destruct;
- (id)anniversaryDate;
- (id)birthdayDate;
- (id)initWithPersonNode:(id)arg1;
- (id)personNode;
- (unsigned long long)relationship;
- (void)setAnniversaryDate:(id)arg1;
- (void)setBirthdayDate:(id)arg1;
- (void)setRelationship:(unsigned long long)arg1;

@end
