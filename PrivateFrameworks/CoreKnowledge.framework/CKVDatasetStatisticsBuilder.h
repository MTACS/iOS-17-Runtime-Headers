
@interface CKVDatasetStatisticsBuilder : NSObject {
    unsigned long long  _count;
    unsigned long long  _max;
    unsigned long long  _min;
    CKVDatasetRecord * _record;
    unsigned long long  _sum;
    unsigned long long  _sumQ;
}

@property (nonatomic, readonly) unsigned long long count;

- (void).cxx_destruct;
- (void)addItemBuffer:(id)arg1;
- (id)build;
- (unsigned long long)count;
- (id)initWithRecord:(id)arg1;

@end
