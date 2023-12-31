
@interface ML3DatabaseStatementCache : NSObject {
    unsigned long long  _cacheSize;
    ML3StatementCacheList * _nodeList;
    NSMutableDictionary * _statementsDictionary;
}

@property (nonatomic, readonly) unsigned long long cacheSize;

- (void).cxx_destruct;
- (id)allStatements;
- (unsigned long long)cacheSize;
- (void)cacheStatement:(id)arg1;
- (id)cachedStatementForSQL:(id)arg1;
- (void)clearCache;
- (void)dealloc;
- (id)initWithCacheSize:(unsigned long long)arg1;

@end
