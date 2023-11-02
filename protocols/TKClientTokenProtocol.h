
@protocol TKClientTokenProtocol <NSObject>

@required

- (void)endSession:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)session:(void *)arg1 createObjectWithAttributes:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 10: NSNumber *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSDictionary *, NSError *, void*
- (void)session:(void *)arg1 deleteObjectWithObjectID:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSNumber *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)session:(void *)arg1 evaluateAccessControl:(void *)arg2 forOperation:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSNumber *, NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)session:(void *)arg1 getAdvertisedItemsWithReply:(void *)arg2; // needs 2 arg types, found 7: NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)session:(void *)arg1 getAttributesOfObjectID:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSNumber *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)session:(void *)arg1 objectID:(void *)arg2 operation:(void *)arg3 data:(void *)arg4 algorithms:(void *)arg5 parameters:(void *)arg6 reply:(void *)arg7; // needs 7 arg types, found 13: NSNumber *, NSData *, long long, NSData *, NSArray *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)startSessionWithLAContext:(void *)arg1 parameters:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: LAContext *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*

@end
