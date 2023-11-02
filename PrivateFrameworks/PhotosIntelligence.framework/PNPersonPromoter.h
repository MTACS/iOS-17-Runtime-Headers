
@interface PNPersonPromoter : NSObject {
    PNPersonDeduperProfile * _deduperProfile;
    <PNPersonPromoterDelegate> * _delegate;
    float  _faceProcessingProgress;
    NSMutableDictionary * _metricsReport;
    PNPersonClusterManager * _personClusterManager;
    <PNPhotoLibraryProtocol> * _photoLibrary;
    PNPersonPromoterProfile * _promoterProfile;
    NSNumber * _quiescentState;
}

@property (nonatomic, retain) PNPersonDeduperProfile *deduperProfile;
@property (nonatomic) <PNPersonPromoterDelegate> *delegate;
@property (nonatomic) float faceProcessingProgress;
@property (nonatomic, readonly) NSMutableDictionary *metricsReport;
@property (nonatomic, retain) PNPersonClusterManager *personClusterManager;
@property (nonatomic, retain) <PNPhotoLibraryProtocol> *photoLibrary;
@property (nonatomic, retain) PNPersonPromoterProfile *promoterProfile;
@property (nonatomic, retain) NSNumber *quiescentState;

+ (id)_personPromoterInformationAtURL:(id)arg1;
+ (bool)_writePersonPromoterInformation:(id)arg1 atURL:(id)arg2;
+ (void)cumulativeNormalDistributionWithData:(id)arg1 sigmaFactor:(double)arg2 usingBlock:(id /* block */)arg3;
+ (bool)hasProcessedForLibrary:(id)arg1;
+ (bool)isEnabled;
+ (unsigned long long)numberOfFacesProcessedOnLastRunAtURL:(id)arg1;
+ (void)probabilityDensityNormalDistributionWithData:(id)arg1 sigmaFactor:(double)arg2 usingBlock:(id /* block */)arg3;
+ (id)requestSuggestedMePersonIdentifierAtURL:(id)arg1 withError:(id*)arg2;
+ (void)setProcessed:(bool)arg1 forLibrary:(id)arg2;

- (void).cxx_destruct;
- (id)_graphOrderedPersonsWithPersons:(id)arg1 withAllPersons:(id)arg2 updateBlock:(id /* block */)arg3;
- (id)_interestingPersonsFromVerifiedPersons:(id)arg1 unverifiedPersons:(id)arg2 updateBlock:(id /* block */)arg3;
- (id)_newPersonDeduperWithVerifiedPersons:(id)arg1;
- (bool)_personClusterShouldBeVerified:(id)arg1;
- (double)_personTimespan:(id)arg1;
- (bool)_promoteInterestingPersons:(id)arg1 updateBlock:(id /* block */)arg2;
- (id)_promoteUnverifiedPersons:(id)arg1 withVerifiedPersons:(id)arg2 updateBlock:(id /* block */)arg3;
- (id)_sortedSocialGroups:(id)arg1 withPersonsByLocalIdentifier:(id)arg2;
- (id)_sortedUnverifiedPersonsToDedupForVerifiedPersons:(id)arg1 type:(unsigned long long)arg2 updateBlock:(id /* block */)arg3;
- (bool)_updateSuggestedMeIdentifierWithPersons:(id)arg1 updateBlock:(id /* block */)arg2;
- (id)_verifiedPersonsToProcess;
- (id)advancedStatus;
- (id)deduperProfile;
- (id)delegate;
- (id)evaluatePersonPromoterWithUpdateBlock:(id /* block */)arg1;
- (float)faceProcessingProgress;
- (void)incrementMetricForKey:(id)arg1 withValue:(unsigned long long)arg2;
- (id)initWithPhotoLibrary:(id)arg1 andDelegate:(id)arg2;
- (id)interestingPersonsFromPersons:(id)arg1 detectionType:(short)arg2 updateBlock:(id /* block */)arg3;
- (id)interestingPersonsFromPersons:(id)arg1 updateBlock:(id /* block */)arg2;
- (bool)isInQuiescentState;
- (id)metricsReport;
- (id)personClusterManager;
- (id)photoLibrary;
- (bool)promoteUnverifiedPersonsWithUpdateBlock:(id /* block */)arg1;
- (id)promoterProfile;
- (id)quiescentState;
- (void)reportMetrics;
- (void)setDeduperProfile:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFaceProcessingProgress:(float)arg1;
- (void)setPersonClusterManager:(id)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (void)setPromoterProfile:(id)arg1;
- (void)setQuiescentState:(id)arg1;

@end
