
@protocol DTFileTransferServiceDebugInboxAuthorizedAPI <DTXAllowedRPC>

@required

- (NSError *)openFileInDocumentDebugInbox:(NSString *)arg1 forApplicationWithBundleIdentifier:(NSString *)arg2 withAnnotation:(NSDictionary *)arg3;
- (NSURL *)transferData:(NSData *)arg1 intoAppContainerForBundleIdentifier:(NSString *)arg2 filename:(NSString *)arg3;
- (NSError *)transferFile:(NSData *)arg1 toDebugInboxOfApplicationWithBundleIdentifier:(NSString *)arg2 destinationFilename:(NSString *)arg3;

@end
