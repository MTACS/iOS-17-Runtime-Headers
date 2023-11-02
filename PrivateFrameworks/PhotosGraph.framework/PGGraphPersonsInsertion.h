
@interface PGGraphPersonsInsertion : PGGraphChange {
    NSSet * _personLocalIdentifiers;
    NSSet * _persons;
}

@property (nonatomic, readonly) NSSet *personLocalIdentifiers;
@property (nonatomic, readonly) NSSet *persons;

- (void).cxx_destruct;
- (unsigned long long)changeCount;
- (id)description;
- (id)initWithPersonLocalIdentifiers:(id)arg1;
- (id)initWithPersons:(id)arg1;
- (id)personLocalIdentifiers;
- (id)persons;
- (unsigned long long)type;

@end
