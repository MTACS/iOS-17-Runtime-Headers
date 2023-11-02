
@protocol FCWritablePrivateDataStorage <NSObject>

@required

- (void)writeReadHistoryItem:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 6: <FCTodayReadHistoryItem> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)writeSeenHistoryItems:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 6: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
