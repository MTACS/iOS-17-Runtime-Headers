
@interface HKMedicationsResolverResult : NSObject {
    bool  _looksGeneric;
    NSArray * _ngramList;
    long long  _numberOfNewNgrams;
    long long  _numberOfUsedNgrams;
    NSArray * _resolvedIds;
    NSArray * _usedNgrams;
}

@property (nonatomic) bool looksGeneric;
@property (nonatomic, copy) NSArray *ngramList;
@property (nonatomic) long long numberOfNewNgrams;
@property (nonatomic) long long numberOfUsedNgrams;
@property (nonatomic, copy) NSArray *resolvedIds;
@property (nonatomic, copy) NSArray *usedNgrams;

- (void).cxx_destruct;
- (id)description;
- (bool)looksGeneric;
- (id)ngramList;
- (long long)numberOfNewNgrams;
- (long long)numberOfUsedNgrams;
- (id)resolvedIds;
- (void)setLooksGeneric:(bool)arg1;
- (void)setNgramList:(id)arg1;
- (void)setNumberOfNewNgrams:(long long)arg1;
- (void)setNumberOfUsedNgrams:(long long)arg1;
- (void)setResolvedIds:(id)arg1;
- (void)setUsedNgrams:(id)arg1;
- (id)usedNgrams;

@end
