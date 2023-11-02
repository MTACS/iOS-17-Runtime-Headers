
@interface VUIDownloadShowDataSource : VUIMediaEntitiesDataSource <VUIMediaEntitiesFetchControllerDelegate> {
    VUIMediaEntitiesFetchController * _fetchController;
    VUIMediaEntity * _showEntity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VUIMediaEntitiesFetchController *fetchController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VUIMediaEntity *showEntity;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;
- (void)dealloc;
- (id)fetchController;
- (id)fetchRequestForMediaEntity:(id)arg1;
- (id)initWithMediaEntity:(id)arg1;
- (void)setFetchController:(id)arg1;
- (void)setShowEntity:(id)arg1;
- (id)showEntity;
- (void)startFetch;

@end
