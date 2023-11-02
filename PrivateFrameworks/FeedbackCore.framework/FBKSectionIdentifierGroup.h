
@interface FBKSectionIdentifierGroup : FBKDiffableSection {
    NSArray * _givenRowIdentifiers;
    NSString * _givenSectionIdentifier;
}

@property (nonatomic, retain) NSArray *givenRowIdentifiers;
@property (nonatomic, retain) NSString *givenSectionIdentifier;

- (void).cxx_destruct;
- (id)givenRowIdentifiers;
- (id)givenSectionIdentifier;
- (id)initWithSectionIdentifier:(id)arg1;
- (id)rowIdentifiers;
- (id)sectionIdentifier;
- (void)setGivenRowIdentifiers:(id)arg1;
- (void)setGivenSectionIdentifier:(id)arg1;

@end
