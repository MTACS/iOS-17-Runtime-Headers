
@protocol _DKKnowledgeEventStreamDeleting

@required

- (unsigned long long)deleteAllEventsInEventStream:(_DKEventStream *)arg1 error:(id*)arg2;
- (void)deleteAllEventsInEventStream:(void *)arg1 responseQueue:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: _DKEventStream *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (unsigned long long)deleteAllEventsMatchingPredicate:(NSPredicate *)arg1 error:(id*)arg2;
- (void)deleteAllEventsMatchingPredicate:(void *)arg1 responseQueue:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: NSPredicate *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*

@end
