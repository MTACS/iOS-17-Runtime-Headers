
@protocol TLTimelineDataSource <NSObject>

@required

- (void)tl_getCurrentTimelineEntryForIdentifiable:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 7: <TLIdentifiable> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <TLTimelineEntry> *, void*

@optional

- (void)tl_getTimelineEntriesForIdentifiable:(void *)arg1 afterDate:(void *)arg2 limit:(void *)arg3 withHandler:(void *)arg4; // needs 4 arg types, found 9: <TLIdentifiable> *, NSDate *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@end
