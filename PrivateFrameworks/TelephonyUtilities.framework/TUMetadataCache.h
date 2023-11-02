
@interface TUMetadataCache : NSObject <TUMetadataCacheDataProviderDelegate> {
    NSArray * _providers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *providers;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)classIdentifier;

- (void).cxx_destruct;
- (void)_updateCacheWithDestinationIDs:(id)arg1 onlyEmptyProviders:(bool)arg2;
- (void)dataProvider:(id)arg1 requestedRefreshWithDestinationIDs:(id)arg2;
- (id)description;
- (id)init;
- (id)initWithDataProviders:(id)arg1;
- (id)initWithQueue:(id)arg1 dataProviders:(id)arg2;
- (bool)isEmpty;
- (id)metadataForDestinationID:(id)arg1;
- (id)providers;
- (id)queue;
- (void)updateCacheForEmptyDataProvidersWithDestinationIDs:(id)arg1;
- (void)updateCacheWithDestinationIDs:(id)arg1;

@end
