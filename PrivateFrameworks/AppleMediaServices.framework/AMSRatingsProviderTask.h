
@interface AMSRatingsProviderTask : AMSTask <AMSBagConsumer> {
    <AMSBagProtocol> * _bag;
    NSString * _clientIdentifier;
    unsigned long long  _mediaType;
    NSString * _storeFront;
    unsigned long long  _useCase;
}

@property (nonatomic, readonly) <AMSBagProtocol> *bag;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long mediaType;
@property (nonatomic, readonly) NSString *storeFront;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long useCase;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;
+ (id)ratingWithValue:(id)arg1 mediaType:(unsigned long long)arg2 storeFront:(id)arg3 clientIdentifier:(id)arg4 bag:(id)arg5;

- (void).cxx_destruct;
- (id)_appQueryItems;
- (id)_commonQueryItems;
- (id)_urlForMediaType:(unsigned long long)arg1 error:(id*)arg2;
- (id)bag;
- (id)clientIdentifier;
- (id)initForAllMediaWithClientIdentifier:(id)arg1 useCase:(unsigned long long)arg2 bag:(id)arg3;
- (id)initForAllMediaWithStoreFront:(id)arg1 clientIdentifier:(id)arg2 useCase:(unsigned long long)arg3 bag:(id)arg4;
- (id)initWithMediaType:(unsigned long long)arg1 clientIdentifier:(id)arg2 bag:(id)arg3;
- (id)initWithMediaType:(unsigned long long)arg1 storeFront:(id)arg2 clientIdentifier:(id)arg3 bag:(id)arg4;
- (unsigned long long)mediaType;
- (id)performTask;
- (id)resultWithCachedData:(id)arg1;
- (id)storeFront;
- (unsigned long long)useCase;

@end
