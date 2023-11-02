
@interface REMICloudIsOffDataView : NSObject {
    REMStore * _store;
}

@property (nonatomic, readonly) REMStore *store;

- (void).cxx_destruct;
- (id)fetchICloudIsOffCloudConfigurationPropertiesWithError:(id*)arg1;
- (id)initWithStore:(id)arg1;
- (id)store;

@end
