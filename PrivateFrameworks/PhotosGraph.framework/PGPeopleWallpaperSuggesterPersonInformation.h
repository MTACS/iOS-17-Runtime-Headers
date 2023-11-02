
@interface PGPeopleWallpaperSuggesterPersonInformation : NSObject {
    NSSet * _dupedPersonLocalIdentifiers;
    long long  _importance;
    NSString * _personLocalIdentifier;
}

@property (readonly) NSSet *dupedPersonLocalIdentifiers;
@property (readonly) long long importance;
@property (readonly) NSString *personLocalIdentifier;

- (void).cxx_destruct;
- (id)dupedPersonLocalIdentifiers;
- (long long)importance;
- (id)initWithPersonLocalIdentifier:(id)arg1 importance:(long long)arg2 unverifiedMergeCandidateLocalIdentifiers:(id)arg3;
- (void)mergeImportance:(long long)arg1;
- (id)personLocalIdentifier;

@end
