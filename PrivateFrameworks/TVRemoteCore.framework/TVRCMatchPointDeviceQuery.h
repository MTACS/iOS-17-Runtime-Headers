
@interface TVRCMatchPointDeviceQuery : NSObject <HMHomeManagerDelegatePrivate> {
    <_TVRCMatchPointDeviceQueryDelegate> * _delegate;
    HMHomeManager * _homeManager;
    <NSObject> * _homekitActiveAssertion;
    NSMutableDictionary * _wrapperToIdentifierMapping;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_TVRCMatchPointDeviceQueryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHomeManager *homeManager;
@property (nonatomic, retain) <NSObject> *homekitActiveAssertion;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *wrapperToIdentifierMapping;

- (void).cxx_destruct;
- (void)_matchPointServiceAdded:(id)arg1;
- (void)_matchPointServiceNameChanged:(id)arg1;
- (void)_matchPointServiceRemoved:(id)arg1;
- (void)_notifyAddedService:(id)arg1;
- (void)_notifyRemovedService:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)homeManager;
- (void)homeManagerDidUpdateCurrentHome:(id)arg1;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)homekitActiveAssertion;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setHomekitActiveAssertion:(id)arg1;
- (void)setWrapperToIdentifierMapping:(id)arg1;
- (void)start;
- (void)stop;
- (id)wrapperToIdentifierMapping;

@end
