
@protocol SLDCollaborationSigningService

@required

- (NSProgress *)signData:(void *)arg1 forCollaborationIdentifier:(void *)arg2 trackingPreventionSalt:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSData *, NSString *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (NSProgress *)signSourceProcessWithMetadata:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: SWCollaborationMetadata *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*

@end
