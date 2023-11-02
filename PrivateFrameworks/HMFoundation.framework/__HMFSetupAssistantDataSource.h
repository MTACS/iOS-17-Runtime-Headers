
@interface __HMFSetupAssistantDataSource : HMFObject <HMFSystemInfoMigrationDataSource> {
    <HMFSystemInfoMigrationDataSourceDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property <HMFSystemInfoMigrationDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isMigrating, nonatomic, readonly) bool migrating;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isMigrating;
- (void)setDelegate:(id)arg1;

@end
