
@interface TIRollingLog : NSObject <NSCopying> {
    unsigned long long  _count;
    NSMutableArray * _entries;
    unsigned long long  _maxCount;
    unsigned long long  _nextIndex;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSArray *currentEntries;
@property (nonatomic, readonly) unsigned long long maxCount;

- (void).cxx_destruct;
- (void)addEntries:(id)arg1;
- (void)addEntry:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)currentEntries;
- (id)initWithMaxCount:(unsigned long long)arg1;
- (unsigned long long)maxCount;

@end
