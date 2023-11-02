
@interface HMDResidentSyncClientDefaultDataSource : NSObject <HMDResidentSyncClientDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)performWithDelay:(unsigned int)arg1 block:(id /* block */)arg2;

@end
