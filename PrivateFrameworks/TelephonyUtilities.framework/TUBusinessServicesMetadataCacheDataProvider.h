
@interface TUBusinessServicesMetadataCacheDataProvider : TUMetadataCacheDataProvider {
    <TUBusinessServiceProviderProtocol> * _businessQueryService;
    id /* block */  _metadataQueryHandler;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) <TUBusinessServiceProviderProtocol> *businessQueryService;
@property (nonatomic, copy) id /* block */ metadataQueryHandler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;
+ (id)tuMetadataDestinationIDForHandleValue:(id)arg1;

- (void).cxx_destruct;
- (id)businessQueryService;
- (void)fetchBusinessServiceInformationForHandleValue:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithBusinessService:(id)arg1;
- (id /* block */)metadataQueryHandler;
- (id)queue;
- (void)setMetadataQueryHandler:(id /* block */)arg1;
- (void)updateCacheWithDestinationIDs:(id)arg1 withGroup:(id)arg2;

@end
