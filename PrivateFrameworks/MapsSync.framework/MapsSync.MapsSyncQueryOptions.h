
@interface MapsSync.MapsSyncQueryOptions : NSObject {
    void notifyOnLoad;
    void predicate;
    void range;
    void sortDescriptors;
}

@property (nonatomic) bool notifyOnLoad;
@property (nonatomic, retain) _TtC8MapsSync22MapsSyncQueryPredicate *predicate;
@property (nonatomic, retain) _TtC8MapsSync13MapsSyncRange *range;
@property (nonatomic, copy) NSArray *sortDescriptors;

+ (id)restrictOptionsWithOptions:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;

- (void).cxx_destruct;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (id)initWithPredicate:(id)arg1 sortDescriptors:(id)arg2 range:(id)arg3;
- (bool)notifyOnLoad;
- (id)predicate;
- (id)range;
- (void)setNotifyOnLoad:(bool)arg1;
- (void)setPredicate:(id)arg1;
- (void)setRange:(id)arg1;
- (void)setSortDescriptors:(id)arg1;
- (id)sortDescriptors;

@end
