
@interface HMWidgetManager : NSObject <HMFLogging> {
    _HMContext * _context;
    HMHomeManager * _homeManager;
}

@property (readonly) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMHomeManager *homeManager;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)context;
- (void)fetchStateForCharacteristics:(id)arg1 completion:(id /* block */)arg2;
- (id)homeManager;
- (id)initWithHomeManager:(id)arg1 context:(id)arg2;
- (void)monitorAndFetchStateForCharacteristics:(id)arg1 widgetIdentifier:(id)arg2 kind:(id)arg3 completion:(id /* block */)arg4;
- (void)performWriteRequests:(id)arg1 forKind:(id)arg2 completion:(id /* block */)arg3;

@end
