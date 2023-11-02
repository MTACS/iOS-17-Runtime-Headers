
@interface AMSRatingsStorefrontTask : AMSTask <AMSBagConsumer> {
    <AMSBagProtocol> * _bag;
    NSString * _clientIdentifier;
    unsigned long long  _mediaType;
}

@property (nonatomic, readonly) <AMSBagProtocol> *bag;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long mediaType;
@property (readonly) Class superclass;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)_urlForMediaType:(unsigned long long)arg1;
- (id)bag;
- (id)clientIdentifier;
- (id)initWithMediaType:(unsigned long long)arg1 clientIdentifier:(id)arg2 bag:(id)arg3;
- (unsigned long long)mediaType;
- (id)performTask;

@end
