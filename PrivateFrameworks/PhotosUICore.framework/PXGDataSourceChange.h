
@interface PXGDataSourceChange : NSObject {
    NSArray * _changeDetails;
    PXSectionedDataSource * _dataSourceAfterChanges;
    PXSectionedDataSource * _dataSourceBeforeChanges;
}

@property (nonatomic, readonly) NSArray *changeDetails;
@property (nonatomic, readonly) PXSectionedDataSource *dataSourceAfterChanges;
@property (nonatomic, readonly) PXSectionedDataSource *dataSourceBeforeChanges;

- (void).cxx_destruct;
- (id)changeDetails;
- (id)dataSourceAfterChanges;
- (id)dataSourceBeforeChanges;
- (id)init;
- (id)initWithChangeDetails:(id)arg1 dataSourceBeforeChanges:(id)arg2 dataSourceAfterChanges:(id)arg3;

@end
