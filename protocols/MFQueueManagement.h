
@protocol MFQueueManagement

@required

- (void)clearPlaybackQueue;
- (<MFQueuePlayerItem> *)currentQueueItem;
- (void)reloadCurrentItemWithReason:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)reloadItemsKeepingCurrentItem:(bool)arg1 allowReuse:(bool)arg2;
- (void)restoreQueue:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
