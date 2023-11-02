
@interface HomeKitAgent : NSObject <HMHomeManagerDelegate> {
    id /* block */  _completionBlock;
    bool  _didUpdateHomes;
    HMHomeManager * _homeManager;
    IDSService * _idsService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_loadHomeKit;

- (void).cxx_destruct;
- (void)_replyWithResidentDevicesIDSIdentifiers:(id /* block */)arg1;
- (void)dealloc;
- (void)fetchResidentDevicesIDSIdentifiersWithReply:(id /* block */)arg1;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)initWithIDSService:(id)arg1;

@end
