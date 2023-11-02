
@interface VNPersonsModel : NSObject {
    VNPersonsModelConfiguration * _configuration;
    <VNPersonsModelDataSource> * _dataSource;
    VNPersonsModelFaceModel * _faceModel_DO_NOT_ACCESS_DIRECTLY;
    unsigned long long  _lastDataChangeSequenceNumber;
}

@property (nonatomic, readonly, copy) VNPersonsModelAlgorithm *algorithm;
@property (nonatomic, readonly, copy) VNPersonsModelConfiguration *configuration;

+ (id)configurationFromLoadedObjects:(id)arg1 error:(id*)arg2;
+ (id)informationForModelWithData:(id)arg1 error:(id*)arg2;
+ (id)informationForModelWithURL:(id)arg1 error:(id*)arg2;
+ (bool)isReadOnly;
+ (id)modelFromData:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)modelFromStream:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)modelFromURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)newModelFromVersion:(unsigned long long)arg1 objects:(id)arg2 error:(id*)arg3;
+ (bool)readObjectForModelVersion:(unsigned long long)arg1 tag:(unsigned int)arg2 fromInputStream:(id)arg3 intoObjectDictionary:(id)arg4 md5Context:(struct CC_MD5state_st { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7[16]; int x8; }*)arg5 error:(id*)arg6;
+ (id)supportedReadVersions;
+ (id)versionNumbersEncodedInClass:(Class)arg1 withMethodNamePrefix:(id)arg2 suffix:(id)arg3;

- (void).cxx_destruct;
- (id)algorithm;
- (id)configuration;
- (bool)convertToAlgorithm:(id)arg1 error:(id*)arg2;
- (id)description;
- (bool)dropCurrentFaceModelAndReturnError:(id*)arg1;
- (unsigned long long)faceCountForPersonWithUniqueIdentifier:(id)arg1;
- (id)faceCountsForAllPersons;
- (id)faceCountsForPersonsWithUniqueIdentifiers:(id)arg1;
- (id)faceObservationsForPersonWithUniqueIdentifier:(id)arg1 error:(id*)arg2;
- (id)initWithConfiguration:(id)arg1 dataSource:(id)arg2;
- (unsigned long long)personCount;
- (id)personUniqueIdentifiers;
- (id)predictPersonFromFaceObservation:(id)arg1 limit:(unsigned long long)arg2 canceller:(id)arg3 error:(id*)arg4;
- (id)trainingFaceObservationsForPersonWithUniqueIdentifier:(id)arg1 canceller:(id)arg2 error:(id*)arg3;
- (id)trainingFaceprintsForPersonWithUniqueIdentifier:(id)arg1 canceller:(id)arg2 error:(id*)arg3;
- (id)upToDateFaceModelWithCanceller:(id)arg1 error:(id*)arg2;
- (bool)updateInternalConfigurationWithModelFaceprintRequestRevision:(unsigned long long)arg1 error:(id*)arg2;

@end
