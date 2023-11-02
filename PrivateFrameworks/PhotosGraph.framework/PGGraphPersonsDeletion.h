
@interface PGGraphPersonsDeletion : PGGraphChange {
    NSSet * _personLocalIdentifiers;
}

@property (nonatomic, readonly) NSSet *personLocalIdentifiers;

- (void).cxx_destruct;
- (unsigned long long)changeCount;
- (id)description;
- (id)initWithPersonLocalIdentifiers:(id)arg1;
- (id)personLocalIdentifiers;
- (unsigned long long)type;

@end
