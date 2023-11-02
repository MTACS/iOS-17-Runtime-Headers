
@interface ODCurareDataProviderResult : NSObject {
    NSArray * _batchProviders;
    NSArray * _dataArray;
    NSArray * _dateArray;
    NSDictionary * _metadata;
}

@property (nonatomic, retain) NSArray *batchProviders;
@property (nonatomic, retain) NSArray *dataArray;
@property (nonatomic, retain) NSArray *dateArray;
@property (nonatomic, retain) NSDictionary *metadata;

- (void).cxx_destruct;
- (id)batchProviders;
- (id)dataArray;
- (id)dateArray;
- (id)initWithBatchProviders:(id)arg1 dateArray:(id)arg2;
- (id)initWithDataArray:(id)arg1 dateArray:(id)arg2;
- (id)metadata;
- (void)setBatchProviders:(id)arg1;
- (void)setDataArray:(id)arg1;
- (void)setDateArray:(id)arg1;
- (void)setMetadata:(id)arg1;

@end
