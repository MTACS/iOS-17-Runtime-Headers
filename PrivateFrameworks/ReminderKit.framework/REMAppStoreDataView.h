
@interface REMAppStoreDataView : NSObject {
    REMStore * _store;
}

@property (nonatomic, readonly) REMStore *store;

- (void).cxx_destruct;
- (id)fetchAppStoreCloudConfigurationPropertiesWithError:(id*)arg1;
- (id)fetchCreatedOrCompletedRemindersCountFromDate:(id)arg1 toDate:(id)arg2 error:(id*)arg3;
- (id)initWithStore:(id)arg1;
- (id)store;

@end
