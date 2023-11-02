
@interface PHAWallpaperShuffleDescriptorGenerator : NSObject {
    NSObject<OS_os_log> * _loggingConnection;
    PHPhotoLibrary * _photoLibrary;
    PFPseudoRandomNumberGenerator * _randomNumberGenerator;
    long long  _shuffleMinimumSuggestionRequired;
}

+ (id)displayNameLocalizationKeyForTopSubtype:(unsigned short)arg1;
+ (unsigned short)wallpaperTopSubtypeFromShuffleSubtype:(unsigned short)arg1;

- (void).cxx_destruct;
- (id)allVIPShufflePosterDescriptorFromEligiblePersonLocalIdentifiers:(id)arg1;
- (id)baseSuggestionFetchOptionsWithSubtype:(unsigned short)arg1 personLocalIdentifiers:(id)arg2 suggestionUUIDsToAvoid:(id)arg3;
- (id)descriptorForSuggestion:(id)arg1;
- (id)fetchSuggestionWithSubtype:(unsigned short)arg1 personLocalIdentifiers:(id)arg2;
- (id)initWithPhotoLibrary:(id)arg1 loggingConnection:(id)arg2;
- (id)peopleShufflePosterDescriptors;
- (id)shuffleDescriptorEligiblePersonLocalIdentifiers;
- (id)shuffleDescriptorsForDonation;
- (id)shufflePosterDescriptorForShuffleSubtype:(unsigned short)arg1 personLocalIdentifiers:(id)arg2 suggestionUUIDsToAvoid:(id)arg3 requireMinimumShuffleCount:(bool)arg4;
- (id)shuffleVIPPersonLocalIdentifiers;
- (id)suggestionPersonLocalIdentifiersFromSuggestions:(id)arg1;

@end
