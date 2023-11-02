
@interface VUIMPMediaEntitiesDataSource : VUIMediaEntitiesDataSource <VUIMediaEntitiesFetchControllerDelegate> {
    VUIMediaEntitiesFetchController * _fetchController;
    unsigned long long  _inFlightArtworkRequests;
    NSOrderedSet * _mediaEntitiesSet;
    NSArray * _mediaEntitiesToFetch;
    VUIMediaLibrary * _mediaLibrary;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _requestedRange;
    bool  _shouldPauseAutoFetchingArtworkInfoDictionaries;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VUIMediaEntitiesFetchController *fetchController;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long inFlightArtworkRequests;
@property (nonatomic, retain) NSOrderedSet *mediaEntitiesSet;
@property (nonatomic, retain) NSArray *mediaEntitiesToFetch;
@property (nonatomic, retain) VUIMediaLibrary *mediaLibrary;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } requestedRange;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchArtworkInfoIfNecessary;
- (id)_getPurchaseHistoryIdsFromMediaEntities:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_loadImageUrlsByPurchaseHistoryIds:(id)arg1;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;
- (void)dealloc;
- (id)fetchController;
- (unsigned long long)inFlightArtworkRequests;
- (id)initWithMediaLibrary:(id)arg1 fetchRequest:(id)arg2;
- (id)mediaEntitiesSet;
- (id)mediaEntitiesToFetch;
- (id)mediaLibrary;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })requestedRange;
- (void)setFetchController:(id)arg1;
- (void)setInFlightArtworkRequests:(unsigned long long)arg1;
- (void)setMediaEntitiesSet:(id)arg1;
- (void)setMediaEntitiesToFetch:(id)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setRequestedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setShouldPauseAutoFetchingArtworkInfoDictionaries:(bool)arg1;
- (bool)shouldPauseAutoFetchingArtworkInfoDictionaries;
- (void)startFetch;

@end
