
@interface CLSCurationContext : NSObject {
    CLSCurationSession * _curationSession;
    NSSet * _hiddenOrBlockedPersonUUIDs;
    NSSet * _nonPetFacedPersonLocalIdentifiers;
    NSDictionary * _personUUIDByMergeCandidateUUID;
    PHPhotoLibrary * _photoLibrary;
    PHUserFeedbackCalculator * _userFeedbackCalculator;
    NSSet * _verifiedPersonUUIDs;
}

@property (nonatomic, readonly) CLSCurationSession *curationSession;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) PHUserFeedbackCalculator *userFeedbackCalculator;

+ (double)mergeCandidateConfidenceThreshold;

- (void).cxx_destruct;
- (void)_loadNonPetFacedPersonLocalIdentifiers;
- (void)_loadPersonAndMergeCandidateUUIDs;
- (id)_mergeCandidateUUIDsForPerson:(id)arg1;
- (id)curationSession;
- (id)description;
- (id)hiddenOrBlockedPersonUUIDs;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1 curationSession:(id)arg2;
- (id)initWithUserFeedbackCalculator:(id)arg1 curationSession:(id)arg2;
- (id)nonPetFacedPersonLocalIdentifiers;
- (id)personUUIDByMergeCandidateUUID;
- (id)photoLibrary;
- (id)userFeedbackCalculator;
- (id)verifiedPersonUUIDs;

@end
