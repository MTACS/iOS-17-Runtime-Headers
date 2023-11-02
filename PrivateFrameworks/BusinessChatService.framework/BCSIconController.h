
@interface BCSIconController : NSObject <BCSIconControllerProtocol> {
    BCSIconRemoteFetch * _iconRemoteFetch;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BCSIconRemoteFetch *iconRemoteFetch;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)fetchSquareIconDataForBusinessItem:(id)arg1 forClientBundleID:(id)arg2 completion:(id /* block */)arg3;
- (id)iconRemoteFetch;
- (id)init;
- (void)setIconRemoteFetch:(id)arg1;

@end
