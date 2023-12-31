
@interface SXResourceDataSourceContainer : NSObject <SXResourceDataSourceContainer> {
    <SXResourceDataSource> * _resourceDataSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXResourceDataSource> *resourceDataSource;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)registerResourceDataSource:(id)arg1;
- (id)resourceDataSource;

@end
