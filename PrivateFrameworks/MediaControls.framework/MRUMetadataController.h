
@interface MRUMetadataController : NSObject <MRUMetadataDataSourceDelegate> {
    <MRUMetadataDataSource> * _dataSource;
    NSHashTable * _observers;
}

@property (nonatomic, readonly) MRUArtwork *artwork;
@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, retain) <MRUMetadataDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MRUNowPlayingInfo *nowPlayingInfo;
@property (nonatomic, retain) NSHashTable *observers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MRUTimeControls *timeControls;
@property (nonatomic, readonly) MRUTransportControls *transportControls;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)artwork;
- (id)bundleID;
- (id)dataSource;
- (id)description;
- (id)initWithDataSource:(id)arg1;
- (void)metadataDataSource:(id)arg1 didChangeArtwork:(id)arg2;
- (void)metadataDataSource:(id)arg1 didChangeBundleID:(id)arg2;
- (void)metadataDataSource:(id)arg1 didChangeNowPlayingInfo:(id)arg2;
- (void)metadataDataSource:(id)arg1 didChangeTimeControls:(id)arg2;
- (void)metadataDataSource:(id)arg1 didChangeTransportControls:(id)arg2;
- (id)nowPlayingInfo;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)representsLongFormVideoContentWithCompletion:(id /* block */)arg1;
- (void)setDataSource:(id)arg1;
- (void)setObservers:(id)arg1;
- (id)timeControls;
- (id)transportControls;

@end
