
@interface SFUILoadedMetadataCollection : NSObject {
    <SFUILoadedMetadataCollectionDelegate> * _delegate;
    NSMutableArray * _headerMetadataObservers;
    NSArray * _latestSerializedMetadatas;
    NSArray * _loadedMetadatas;
    NSArray * _metadatas;
}

@property (nonatomic) <SFUILoadedMetadataCollectionDelegate> *delegate;
@property (nonatomic, copy) NSMutableArray *headerMetadataObservers;
@property (nonatomic, copy) NSArray *latestSerializedMetadatas;
@property (nonatomic, copy) NSArray *loadedMetadatas;
@property (nonatomic, readonly, copy) NSArray *metadatas;

+ (id)_serializeMetadatas:(id)arg1;

- (void).cxx_destruct;
- (void)_didFinishLoading;
- (void)_listenForMetadataChanges;
- (void)_load;
- (void)_metadataDidChange:(id)arg1;
- (id)delegate;
- (id)headerMetadataObservers;
- (id)initWithMetadatas:(id)arg1;
- (id)latestSerializedMetadatas;
- (id)loadedMetadatas;
- (id)metadatas;
- (void)setDelegate:(id)arg1;
- (void)setHeaderMetadataObservers:(id)arg1;
- (void)setLatestSerializedMetadatas:(id)arg1;
- (void)setLoadedMetadatas:(id)arg1;

@end
