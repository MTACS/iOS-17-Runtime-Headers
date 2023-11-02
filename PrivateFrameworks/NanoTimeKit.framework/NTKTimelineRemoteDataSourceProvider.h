
@interface NTKTimelineRemoteDataSourceProvider : NSObject <TLTimelineDataSourceProvider> {
    NSOperationQueue * _operationQueue;
    double  _timeout;
    NTKTimelineDataSourceWrapper * _wrapper;
}

@property (nonatomic, readonly) <CLKComplicationDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSOperationQueue *operationQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeout;
@property (nonatomic, readonly) NTKTimelineDataSourceWrapper *wrapper;

- (void).cxx_destruct;
- (id)dataSource;
- (void)getCurrentEntryForComplication:(id)arg1 completion:(id /* block */)arg2;
- (void)getEntriesForComplication:(id)arg1 afterDate:(id)arg2 limit:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (id)initWithDataSource:(id)arg1;
- (id)operationQueue;
- (double)timeout;
- (void)tl_getDataSourceWithCompletion:(id /* block */)arg1;
- (id)wrapper;

@end
