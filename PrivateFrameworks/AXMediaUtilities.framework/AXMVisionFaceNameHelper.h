
@interface AXMVisionFaceNameHelper : NSObject {
    double  __lastFileModificationCheckTime;
    NSMutableDictionary * __personLocalIdentifierToName;
    VNPersonsModel * __personsModel;
    NSDate * __personsModelFileModifiedDate;
}

@property (nonatomic) double _lastFileModificationCheckTime;
@property (nonatomic, retain) NSMutableDictionary *_personLocalIdentifierToName;
@property (nonatomic, retain) VNPersonsModel *_personsModel;
@property (nonatomic) NSDate *_personsModelFileModifiedDate;

- (void).cxx_destruct;
- (bool)_checkPhotoLibraryAuthorization;
- (id)_fetchPersonsForLocalIdentifiers:(id)arg1 withPhotoLibraryURL:(id)arg2;
- (id)_fileModificationDateForPath:(id)arg1;
- (id)_filePathForPersonsModelWithPhotoLibraryURL:(id)arg1;
- (bool)_isDeviceUnlocked;
- (double)_lastFileModificationCheckTime;
- (bool)_loadPersonsModelWithPhotoLibraryURL:(id)arg1;
- (id)_personLocalIdentifierToName;
- (id)_personsModel;
- (id)_personsModelFileModifiedDate;
- (id)_photoAuthorizationMessage:(long long)arg1;
- (void)_resetState;
- (bool)_shouldReloadPersonsModelWithPhotoLibraryURL:(id)arg1;
- (unsigned long long)faceprintRequestRevisionForPersonsModel;
- (id)nameForFaceObservation:(id)arg1;
- (id)photoLibraryWithURL:(id)arg1;
- (bool)prepareForLookupWithPhotoLibraryURL:(id)arg1;
- (void)set_lastFileModificationCheckTime:(double)arg1;
- (void)set_personLocalIdentifierToName:(id)arg1;
- (void)set_personsModel:(id)arg1;
- (void)set_personsModelFileModifiedDate:(id)arg1;

@end
