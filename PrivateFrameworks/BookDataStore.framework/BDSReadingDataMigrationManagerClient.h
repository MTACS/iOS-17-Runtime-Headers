
@interface BDSReadingDataMigrationManagerClient : NSObject <BDSReadingDataMigrationService> {
    BDSServiceProxy * _serviceProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BDSServiceProxy *serviceProxy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)mergeMovedReadingHistoryDataWithCompletionHandler:(id /* block */)arg1;
- (id)serviceProxy;
- (void)setServiceProxy:(id)arg1;

@end
