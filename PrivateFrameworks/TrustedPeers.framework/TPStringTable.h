
@interface TPStringTable : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSHashTable * _table;
}

@property (readonly) unsigned long long _count;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSHashTable *table;

+ (id)defaultTable;

- (void).cxx_destruct;
- (unsigned long long)_count;
- (id)initWithIdentifier:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void)setTable:(id)arg1;
- (id)setWithArray:(id)arg1;
- (id)stringWithString:(id)arg1;
- (id)table;

@end
