
@interface WBSForYouDataSourceWeightManager : NSObject {
    <WBSDictionaryKeyValueStore> * _store;
}

- (void).cxx_destruct;
- (void)clear;
- (void)downvoteSource:(unsigned long long)arg1;
- (id)initWithKeyValueStore:(id)arg1;
- (double)weightForSource:(unsigned long long)arg1;

@end
