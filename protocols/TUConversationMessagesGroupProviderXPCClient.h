
@protocol TUConversationMessagesGroupProviderXPCClient <NSObject>

@required

- (oneway void)getMessagesGroupDetailsForMessagesGroupUUID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 9: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSError *, void*

@end
