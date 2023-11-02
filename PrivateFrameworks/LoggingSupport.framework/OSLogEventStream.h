
@interface OSLogEventStream : OSLogEventStreamBase {
    _OSLogCatalogFilter * _catalogFilter;
    _OSLogIndex * _index;
    OSLogEventSource * _source;
    struct _os_timesync_db_s { } * _tsdb;
}

@property (nonatomic, retain) _OSLogCatalogFilter *catalogFilter;
@property (nonatomic, copy) NSPredicate *filterPredicate;
@property (nonatomic) unsigned long long flags;
@property (nonatomic, retain) _OSLogIndex *index;
@property (nonatomic, readonly) OSLogEventSource *source;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *target;
@property (nonatomic) struct _os_timesync_db_s { }*tsdb;

- (void).cxx_destruct;
- (void)_activateStreamFromDate:(id)arg1 toDate:(id)arg2;
- (void)_activateStreamFromTimeIntervalSinceLastBoot:(double)arg1;
- (void)_activateStreamInRange:(struct os_timesync_range_s { struct os_trace_uuid_map_s {} *x1; unsigned long long x2; unsigned long long x3; unsigned char x4[0][16]; }*)arg1;
- (void)_foreachIndexFile:(id /* block */)arg1;
- (id)_initWithSource:(id)arg1 flags:(unsigned long long)arg2;
- (void)activateStreamFromDate:(id)arg1;
- (void)activateStreamFromDate:(id)arg1 toDate:(id)arg2;
- (void)activateStreamFromLastBoot;
- (void)activateStreamFromPosition:(id)arg1;
- (id)catalogFilter;
- (void)dealloc;
- (id)index;
- (id)initWithSource:(id)arg1;
- (id)initWithSource:(id)arg1 skipNonSignpostFiles:(bool)arg2;
- (void)setCatalogFilter:(id)arg1;
- (void)setFilterPredicate:(id)arg1;
- (void)setIndex:(id)arg1;
- (void)setTsdb:(struct _os_timesync_db_s { }*)arg1;
- (id)source;
- (struct _os_timesync_db_s { }*)tsdb;

@end
