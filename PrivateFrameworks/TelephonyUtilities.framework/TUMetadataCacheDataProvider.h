
@interface TUMetadataCacheDataProvider : NSObject {
    <TUMetadataCacheDataProviderDelegate> * _delegate;
    NSMutableDictionary * _providerCache;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) <TUMetadataCacheDataProviderDelegate> *delegate;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (nonatomic, readonly) NSMutableDictionary *providerCache;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)classIdentifier;

- (void).cxx_destruct;
- (void)_invalidateCache;
- (id)delegate;
- (id)description;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)invalidateCache;
- (bool)isEmpty;
- (id)metadataForDestinationID:(id)arg1;
- (id)providerCache;
- (id)queue;
- (void)refresh;
- (void)setDelegate:(id)arg1;
- (void)setObject:(id)arg1 forDestinationID:(id)arg2;
- (void)updateCacheWithDestinationIDs:(id)arg1 withGroup:(id)arg2;

@end
