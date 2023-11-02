
@interface XRRecentArray : NSObject {
    NSMutableArray * _entries;
    NSObject<OS_dispatch_semaphore> * _lock;
    unsigned long long  _maximumRecentCount;
}

@property (nonatomic) unsigned long long maximumRecentCount;

- (void).cxx_destruct;
- (void)addEntry:(id)arg1;
- (bool)containsEntry:(id)arg1;
- (id)entries;
- (id)entryAtIndex:(unsigned long long)arg1;
- (id)init;
- (id)initWithMaximumRecentCount:(unsigned long long)arg1;
- (unsigned long long)maximumRecentCount;
- (void)removeEntry:(id)arg1;
- (void)removeEntryAtIndex:(unsigned long long)arg1;
- (void)setMaximumRecentCount:(unsigned long long)arg1;

@end
