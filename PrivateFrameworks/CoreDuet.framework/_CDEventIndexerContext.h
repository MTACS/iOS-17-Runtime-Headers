
@interface _CDEventIndexerContext : NSObject {
    unsigned long long  _batchSize;
    _CDEventIndexerBookmark * _bookmark;
    id /* block */  _completion;
    long long  _currentVersion;
    NSDate * _indexDate;
    NSObject<OS_os_transaction> * _transaction;
}

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
