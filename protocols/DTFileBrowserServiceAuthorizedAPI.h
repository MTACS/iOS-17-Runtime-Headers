
@protocol DTFileBrowserServiceAuthorizedAPI <DTXAllowedRPC>

@required

- (NSArray *)contentsOfDirectoryAtPath:(NSString *)arg1;
- (NSData *)dataFromFileAtPath:(NSString *)arg1;
- (NSArray *)entriesAtPath:(NSString *)arg1;
- (NSArray *)entriesInPathsArray:(NSArray *)arg1;
- (NSDictionary *)fileExistsAtPath:(NSString *)arg1;
- (NSMutableDictionary *)updateAttributesForItem:(NSMutableDictionary *)arg1;

@end
