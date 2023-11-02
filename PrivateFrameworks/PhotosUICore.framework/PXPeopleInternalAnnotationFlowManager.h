
@interface PXPeopleInternalAnnotationFlowManager : NSObject {
    UICollectionView * _collectionView;
    id /* block */  _completion;
    PXPeopleSectionedDataSource * _dataSource;
    NSMutableSet * _graphVerifiedPersonUUIDsAtStartOfAnnotation;
    PXPeopleMetricsActionQueue * _metricsActionQueue;
    NSMutableArray * _selectedPersonsForAnnotation;
    UICollectionViewController * _viewController;
}

@property (nonatomic, readonly) UICollectionView *collectionView;
@property (nonatomic, readonly) id /* block */ completion;
@property (nonatomic, readonly) PXPeopleSectionedDataSource *dataSource;
@property (nonatomic, retain) NSMutableSet *graphVerifiedPersonUUIDsAtStartOfAnnotation;
@property (nonatomic, retain) PXPeopleMetricsActionQueue *metricsActionQueue;
@property (nonatomic, retain) NSMutableArray *selectedPersonsForAnnotation;
@property (nonatomic, readonly) UICollectionViewController *viewController;

- (void).cxx_destruct;
- (void)_checkForNewGraphVerifiedPeopleAndAddReannotationItems;
- (void)_checkForNewMergeCandidatesAndAddReannotationItems;
- (bool)_shouldRunFaceProcessingForPhotoLibrary:(id)arg1;
- (void)_showAnnotationCompletedWithCompletionHandler:(id /* block */)arg1;
- (void)_showFaceProcessingViewForPhotoLibrary:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)collectionView;
- (id /* block */)completion;
- (void)continueAnnotationFlow;
- (id)dataSource;
- (id)graphVerifiedPersonUUIDsAtStartOfAnnotation;
- (id)initWithPeopleCollectionViewController:(id)arg1 dataSource:(id)arg2 completion:(id /* block */)arg3;
- (id)metricsActionQueue;
- (id)selectedPersonsForAnnotation;
- (void)setGraphVerifiedPersonUUIDsAtStartOfAnnotation:(id)arg1;
- (void)setMetricsActionQueue:(id)arg1;
- (void)setSelectedPersonsForAnnotation:(id)arg1;
- (void)startAnnotationFlowForSelectedPersonIndexPaths:(id)arg1;
- (id)viewController;

@end
