
@interface GDHomeManager : NSObject <HMHomeManagerDelegate> {
    _PASLock * _guardedData;
    NSObject<OS_dispatch_semaphore> * _homeUpdateSem;
    HMHomeManager * _manager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *homes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)homes;
- (id)init;

@end
