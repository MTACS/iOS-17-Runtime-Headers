
@protocol CoreDAVLeafDataPayload <NSObject>

@required

- (NSData *)dataPayload;
- (id)initWithURL:(NSURL *)arg1 eTag:(NSString *)arg2 dataPayload:(NSData *)arg3 inContainerWithURL:(NSURL *)arg4 withAccountInfoProvider:(id <CoreDAVAccountInfoProvider>)arg5;
- (NSURL *)serverID;
- (void)setServerID:(NSURL *)arg1;
- (NSString *)syncKey;

@optional

- (NSArray *)childrenOrder;
- (NSURL *)destinationURL;
- (void)setDestinationURL:(NSURL *)arg1;
- (void)setSourceURL:(NSURL *)arg1;
- (NSURL *)sourceURL;

@end
