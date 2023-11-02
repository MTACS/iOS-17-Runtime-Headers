
@protocol FxMetaPlugWrapper

@required

- (NSArray *)defaultFolderURLs;
- (NSArray *)fxMetaPlugsInFolderURLs:(NSArray *)arg1 includingBuiltIns:(bool)arg2;
- (Class)plugInClass;
- (NSString *)plugInTypeUUID;

@end
