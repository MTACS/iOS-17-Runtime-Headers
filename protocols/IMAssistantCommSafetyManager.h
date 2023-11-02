
@protocol IMAssistantCommSafetyManager <NSObject>

@required

- (bool)checksForSensitivityOnReceive;
- (bool)checksForSensitivityOnSend;
- (void)isSensitiveContent:(void *)arg1 withChatID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSURL *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
