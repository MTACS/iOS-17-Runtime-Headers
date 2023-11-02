
@interface BMPruningPolicy : NSObject {
    bool  _filterByAgeOnRead;
    double  _maxAge;
    unsigned long long  _maxEventCount;
    unsigned long long  _maxStreamSize;
    bool  _pruneOnAccess;
}

@property (nonatomic) bool filterByAgeOnRead;
@property (nonatomic) double maxAge;
@property (nonatomic) unsigned long long maxEventCount;
@property (nonatomic) unsigned long long maxStreamSize;
@property (nonatomic) bool pruneOnAccess;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)filterByAgeOnRead;
- (unsigned long long)hash;
- (id)init;
- (id)initPruneOnAccess:(bool)arg1 filterByAgeOnRead:(bool)arg2 maxAge:(double)arg3 maxStreamSize:(unsigned long long)arg4;
- (id)initPruneOnAccess:(bool)arg1 filterByAgeOnRead:(bool)arg2 maxAge:(double)arg3 maxStreamSize:(unsigned long long)arg4 maxEventCount:(unsigned long long)arg5;
- (bool)isEqual:(id)arg1;
- (double)maxAge;
- (unsigned long long)maxEventCount;
- (unsigned long long)maxStreamSize;
- (bool)pruneOnAccess;
- (void)setFilterByAgeOnRead:(bool)arg1;
- (void)setMaxAge:(double)arg1;
- (void)setMaxEventCount:(unsigned long long)arg1;
- (void)setMaxStreamSize:(unsigned long long)arg1;
- (void)setPruneOnAccess:(bool)arg1;

@end
