
@protocol IMFileTransferCenter <NSObject>

@required

- (NSString *)guidForNewOutgoingTransferWithLocalURL:(NSURL *)arg1;
- (bool)registerGUID:(NSString *)arg1 forNewOutgoingTransferWithLocalURL:(NSURL *)arg2;
- (void)registerTransferWithDaemon:(NSString *)arg1;
- (void)setAuxImageForTransfer:(NSString *)arg1 value:(bool)arg2;
- (void)setAuxVideoForTransfer:(NSString *)arg1 value:(bool)arg2;

@end
