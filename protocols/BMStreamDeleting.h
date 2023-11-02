
@protocol BMStreamDeleting <BMStream>

@required

- (void)deleteEventsWithPredicate:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, BMStoreEvent *, bool*, void*
- (void)deleteLocalAndRemoteEventsWithPredicateBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, BMStoreEvent *, bool*, void*
- (void)deleteLocalAndRemoteEventsWithReason:(void *)arg1 usingPredicateBlock:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, BMStoreEvent *, bool*, void*

@end
