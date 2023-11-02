
@interface PGPeopleCentricSuggestion : PGSingleAssetSuggestion {
    NSArray * _suggestedPersonLocalIdentifiers;
}

- (void).cxx_destruct;
- (id)initWithPersonLocalIdentifier:(id)arg1 asset:(id)arg2;
- (id)initWithPersonLocalIdentifiers:(id)arg1 asset:(id)arg2;
- (id)suggestedPersonLocalIdentifiers;

@end
