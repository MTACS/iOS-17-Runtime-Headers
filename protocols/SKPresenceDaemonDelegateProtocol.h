
@protocol SKPresenceDaemonDelegateProtocol <NSObject>

@required

- (void)invitedHandlesChangedForPresenceIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)presentHandlesChangedForPresenceIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
