
@interface CLSAssetFaceInformationSummary : NSObject {
    double  _averageFaceQuality;
    double  _averageFaceQualityIncludingPets;
    double  _averageFaceQualityOfVerifiedPersons;
    NSDictionary * _faceInformationByConsolidatedPersonLocalIdentifier;
    NSDictionary * _faceInformationByPersonLocalIdentifier;
    unsigned short  _numberOfFaces;
    unsigned short  _numberOfFacesIncludingPets;
    unsigned short  _numberOfFacesOfHiddenPersons;
    unsigned short  _numberOfFacesOfVerifiedPersons;
    unsigned short  _numberOfGoodFaces;
    unsigned short  _numberOfGoodFacesIncludingPets;
    unsigned short  _numberOfGoodFacesOfVerifiedPersons;
    double  _userFeedbackScore;
}

@property (readonly) double averageFaceQuality;
@property (readonly) double averageFaceQualityIncludingPets;
@property (readonly) double averageFaceQualityOfVerifiedPersons;
@property (readonly) NSDictionary *faceInformationByConsolidatedPersonLocalIdentifier;
@property (readonly) NSDictionary *faceInformationByPersonLocalIdentifier;
@property (readonly) unsigned short numberOfFaces;
@property (readonly) unsigned short numberOfFacesIncludingPets;
@property (readonly) unsigned short numberOfFacesOfHiddenPersons;
@property (readonly) unsigned short numberOfFacesOfVerifiedPersons;
@property (readonly) unsigned short numberOfGoodFaces;
@property (readonly) unsigned short numberOfGoodFacesIncludingPets;
@property (readonly) unsigned short numberOfGoodFacesOfVerifiedPersons;
@property (readonly) double userFeedbackScore;

+ (id)_faceInformationByPersonLocalIdentifierFromDictionaryRepresentation:(id)arg1;

- (void).cxx_destruct;
- (id)_dictionaryRepresentationForFaceInformationByPersonLocalIdentifier:(id)arg1;
- (double)averageFaceQuality;
- (double)averageFaceQualityIncludingPets;
- (double)averageFaceQualityOfVerifiedPersons;
- (id)dictionaryRepresentation;
- (id)faceInformationByConsolidatedPersonLocalIdentifier;
- (id)faceInformationByPersonLocalIdentifier;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithNumberOfFaces:(unsigned long long)arg1 numberOfFacesIncludingPets:(unsigned long long)arg2 numberOfFacesOfVerifiedPersons:(unsigned long long)arg3 numberOfFacesOfHiddenPersons:(unsigned long long)arg4 numberOfGoodFaces:(unsigned long long)arg5 numberOfGoodFacesIncludingPets:(unsigned long long)arg6 numberOfGoodFacesOfVerifiedPersons:(unsigned long long)arg7 averageFaceQuality:(double)arg8 averageFaceQualityIncludingPets:(double)arg9 averageFaceQualityOfVerifiedPersons:(double)arg10 userFeedbackScore:(double)arg11 faceInformationByPersonLocalIdentifier:(id)arg12 faceInformationByConsolidatedPersonLocalIdentifier:(id)arg13;
- (unsigned short)numberOfFaces;
- (unsigned short)numberOfFacesIncludingPets;
- (unsigned short)numberOfFacesOfHiddenPersons;
- (unsigned short)numberOfFacesOfVerifiedPersons;
- (unsigned short)numberOfGoodFaces;
- (unsigned short)numberOfGoodFacesIncludingPets;
- (unsigned short)numberOfGoodFacesOfVerifiedPersons;
- (double)userFeedbackScore;

@end
