
@interface PGPetWallpaperSuggestion : PGSingleAssetSuggestion {
    NSArray * _suggestedPersonLocalIdentifiers;
}

- (void).cxx_destruct;
- (id)initWithPetLocalIdentifier:(id)arg1 type:(unsigned short)arg2 subtype:(unsigned short)arg3 asset:(id)arg4;
- (id)suggestedPersonLocalIdentifiers;

@end
