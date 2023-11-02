
@protocol MGInternalQueryRunner <NSObject>

@required

- (void)startOutstandingQueryWithPredicate:(void *)arg1 handler:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 14: NSPredicate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*, id /* block */, void*, void, id /* block */, MGOutstandingQuery *, void*
- (void)stopOutstandingQuery:(MGOutstandingQuery *)arg1;

@end
