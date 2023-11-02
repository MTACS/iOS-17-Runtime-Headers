
@interface InMemoryRecordSet : NSObject {
    unsigned long long  _count;
    NSArray * _datas;
    NSArray * _infos;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSArray *datas;
@property (nonatomic, readonly) NSArray *infos;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)datas;
- (id)infos;
- (id)initWithRecordInfos:(id)arg1 recordDatas:(id)arg2;

@end
