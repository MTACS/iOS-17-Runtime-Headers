
@protocol ACHActivitySummaryIteratorServerInterface <NSObject>

@required

- (void)remote_activitySummariesForStartDateComponents:(void *)arg1 endDateComponents:(void *)arg2 includePrivateProperties:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSDateComponents *, NSDateComponents *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
