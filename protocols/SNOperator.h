
@protocol SNOperator

@required

- (void)processInput:(void *)arg1 portID:(void *)arg2 downstreamHandler:(void *)arg3; // needs 3 arg types, found 10: id, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, id, NSError *, void*
- (void)processTerminationWithOptionalError:(void *)arg1 portID:(void *)arg2 downstreamHandler:(void *)arg3; // needs 3 arg types, found 10: NSError *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, id, NSError *, void*

@end
