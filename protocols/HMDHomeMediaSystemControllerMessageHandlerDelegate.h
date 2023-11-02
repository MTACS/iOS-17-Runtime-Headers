
@protocol HMDHomeMediaSystemControllerMessageHandlerDelegate <NSObject>

@required

- (void)messageHandlerAddMediaSystem:(void *)arg1 configuredName:(void *)arg2 leftUUID:(void *)arg3 leftAccessoryUUID:(void *)arg4 rightUUID:(void *)arg5 rightAccessoryUUID:(void *)arg6 builderSession:(void *)arg7 completion:(void *)arg8; // needs 8 arg types, found 14: NSUUID *, NSString *, NSUUID *, NSUUID *, NSUUID *, NSUUID *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)messageHandlerRemoveMediaSystem:(NSUUID *)arg1 builderSession:(NSString *)arg2 message:(HMFMessage *)arg3;
- (void)messageHandlerUpdateMediaSystem:(void *)arg1 configuredName:(void *)arg2 leftUUID:(void *)arg3 leftAccessoryUUID:(void *)arg4 rightUUID:(void *)arg5 rightAccessoryUUID:(void *)arg6 builderSession:(void *)arg7 completion:(void *)arg8; // needs 8 arg types, found 14: NSUUID *, NSString *, NSUUID *, NSUUID *, NSUUID *, NSUUID *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*

@end
