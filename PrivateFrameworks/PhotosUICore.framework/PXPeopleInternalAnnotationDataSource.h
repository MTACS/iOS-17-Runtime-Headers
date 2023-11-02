
@interface PXPeopleInternalAnnotationDataSource : NSObject <PXPeopleRecoDataSourceDelegate, PXPhotoLibraryUIChangeObserver> {
    NSMutableSet * _acceptedMergeCandidates;
    NSMutableSet * _acceptedUnverifiedPeople;
    PXPeopleRecoDataSource * _confirmedAssetsDataSource;
    <PXPeopleInternalAnnotationDataSourceDelegate> * _dataSourceDelegate;
    bool  _hasChanges;
    NSMutableDictionary * _keyFaceDistancesByUnverifiedPersonLocalIdentifier;
    PHFetchResult * _mergeCandidates;
    PXPeopleSuggestionDataSource * _mergeCandidatesDataSource;
    PHPerson * _person;
    NSMutableSet * _rejectedMergeCandidates;
    NSMutableArray * _unverifiedPeople;
    NSMutableArray * _unverifiedPeopleFaces;
}

@property (nonatomic, retain) NSMutableSet *acceptedMergeCandidates;
@property (nonatomic, retain) NSMutableSet *acceptedUnverifiedPeople;
@property (nonatomic, readonly) PXPeopleRecoDataSource *confirmedAssetsDataSource;
@property (nonatomic, readonly) <PXPeopleInternalAnnotationDataSourceDelegate> *dataSourceDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasChanges;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *keyFaceDistancesByUnverifiedPersonLocalIdentifier;
@property (nonatomic, retain) PHFetchResult *mergeCandidates;
@property (nonatomic, readonly) PXPeopleSuggestionDataSource *mergeCandidatesDataSource;
@property (nonatomic, retain) PHPerson *person;
@property (nonatomic, retain) NSMutableSet *rejectedMergeCandidates;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *unverifiedPeople;
@property (nonatomic, retain) NSMutableArray *unverifiedPeopleFaces;

- (void).cxx_destruct;
- (id)acceptedMergeCandidates;
- (id)acceptedUnverifiedPeople;
- (void)commitChanges;
- (id)confirmedAssetsDataSource;
- (id)dataSourceDelegate;
- (void)fetchMergeCandidatesAndFaces;
- (void)fetchUnverifiedPeopleAndFaces;
- (bool)hasChanges;
- (id)initWithPerson:(id)arg1 dataSourceDelegate:(id)arg2;
- (bool)isIndexPathRejected:(id)arg1;
- (id)keyFaceDistanceForUnverifiedPersonIndexPath:(id)arg1;
- (id)keyFaceDistancesByUnverifiedPersonLocalIdentifier;
- (id)mergeCandidates;
- (id)mergeCandidatesDataSource;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)person;
- (void)recoDataSourceDataChanged:(id)arg1;
- (id)rejectedMergeCandidates;
- (void)requestImageForItemAtIndexPath:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 displayScale:(double)arg3 imageBlock:(id /* block */)arg4;
- (void)setAcceptedMergeCandidates:(id)arg1;
- (void)setAcceptedUnverifiedPeople:(id)arg1;
- (void)setHasChanges:(bool)arg1;
- (void)setKeyFaceDistancesByUnverifiedPersonLocalIdentifier:(id)arg1;
- (void)setMergeCandidates:(id)arg1;
- (void)setPerson:(id)arg1;
- (void)setRejectedMergeCandidates:(id)arg1;
- (void)setUnverifiedPeople:(id)arg1;
- (void)setUnverifiedPeopleFaces:(id)arg1;
- (id)titleForIndexPath:(id)arg1;
- (bool)toggleRejectionForIndexPath:(id)arg1;
- (id)unverifiedPeople;
- (id)unverifiedPeopleFaces;

@end
