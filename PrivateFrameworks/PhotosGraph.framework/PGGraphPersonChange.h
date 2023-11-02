
@interface PGGraphPersonChange : PGGraphChange {
    NSString * _contactIdentifier;
    NSString * _personLocalIdentifier;
    NSSet * _propertyNames;
}

@property (nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic, readonly) NSString *personLocalIdentifier;
@property (nonatomic, readonly) NSSet *propertyNames;

- (void).cxx_destruct;
- (id)contactIdentifier;
- (id)description;
- (id)initWithPersonLocalIdentifier:(id)arg1 contactIdentifier:(id)arg2 propertyNames:(id)arg3;
- (id)initWithPersonLocalIdentifier:(id)arg1 propertyNames:(id)arg2;
- (void)mergeChange:(id)arg1;
- (id)personLocalIdentifier;
- (id)propertyNames;
- (unsigned long long)type;

@end
