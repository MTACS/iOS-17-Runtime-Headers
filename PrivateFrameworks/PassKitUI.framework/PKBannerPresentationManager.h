
@interface PKBannerPresentationManager : NSObject <BNBannerSourceDelegate> {
    long long  _destination;
    <PKBannerPresentableProvider> * _provider;
    PKBannerPresentableRequest * _request;
    NSString * _requesterIdentifier;
    BNBannerSource * _source;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id provider;
@property (readonly) Class superclass;

+ (id)_managerForDestination:(long long)arg1 withProvider:(id)arg2;

- (void).cxx_destruct;
- (id)_createPresentableWithConfiguration:(id)arg1;
- (id)_currentRequest;
- (void)_setNeedsUpdate;
- (void)bannerSourceDidInvalidate:(id)arg1;
- (id)init;
- (id)provider;

@end
