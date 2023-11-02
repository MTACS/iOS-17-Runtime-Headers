
@interface NTKTimelineDataSourceWrapper : NSObject <TLTimelineDataSource> {
    <CLKComplicationDataSource> * _dataSource;
}

@property (nonatomic, readonly) <CLKComplicationDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dataSource;
- (id)initWithDataSource:(id)arg1;
- (void)tl_getCurrentTimelineEntryForIdentifiable:(id)arg1 withHandler:(id /* block */)arg2;
- (void)tl_getTimelineEntriesForIdentifiable:(id)arg1 afterDate:(id)arg2 limit:(unsigned long long)arg3 withHandler:(id /* block */)arg4;

@end
