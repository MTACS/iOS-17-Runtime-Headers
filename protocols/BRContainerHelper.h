
@protocol BRContainerHelper <NSObject>

@required

+ (<BRContainerHelper> *)sharedHelper;

- (unsigned short)br_capabilityToMoveFromURL:(NSURL *)arg1 toNewParent:(NSURL *)arg2 error:(id*)arg3;
- (bool)canFetchAllContainersByID;
- (NSDictionary *)fetchAllContainersByIDWithError:(id*)arg1;
- (BRContainer *)fetchContainerForMangledID:(BRMangledID *)arg1 personaID:(NSString *)arg2;
- (NSString *)itemIDForURL:(NSURL *)arg1 error:(id*)arg2;

@end
