
@protocol CacheDeleteServiceProtocol

@required

- (void)serviceCallback:(void *)arg1 replyBlock:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)serviceCancelPurge:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)serviceNotify:(void *)arg1 replyBlock:(void *)arg2; // needs 2 arg types, found 6: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)servicePeriodic:(void *)arg1 info:(void *)arg2 replyBlock:(void *)arg3; // needs 3 arg types, found 8: int, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)servicePing:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)servicePurge:(void *)arg1 info:(void *)arg2 replyBlock:(void *)arg3; // needs 3 arg types, found 8: int, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)servicePurgeable:(void *)arg1 info:(void *)arg2 replyBlock:(void *)arg3; // needs 3 arg types, found 8: int, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*

@end
