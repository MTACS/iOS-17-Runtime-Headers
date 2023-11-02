
@protocol GTLoopbackService

@required

- (NSDictionary *)echo:(NSDictionary *)arg1;
- (void)echo:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)echo:(void *)arg1 repeat:(void *)arg2 callback:(void *)arg3; // needs 3 arg types, found 8: NSDictionary *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)echo:(void *)arg1 repeat:(void *)arg2 callback:(void *)arg3 complete:(void *)arg4; // needs 4 arg types, found 14: NSDictionary *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*, id /* block */, void*, void, id /* block */, NSDictionary *, void*

@end
