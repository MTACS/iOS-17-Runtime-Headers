
@interface PXInboxAggregateDataSource : PXInboxModelDataSource {
    NSDictionary * _providerSourceDictionary;
}

@property (nonatomic, readonly, copy) NSDictionary *providerSourceDictionary;

- (void).cxx_destruct;
- (id)initWithModels:(id)arg1 providerSourceDictionary:(id)arg2;
- (id)providerSourceDictionary;
- (id)providerSourceForModel:(id)arg1;

@end
