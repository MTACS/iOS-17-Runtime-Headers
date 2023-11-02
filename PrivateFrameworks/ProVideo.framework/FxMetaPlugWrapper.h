
@interface FxMetaPlugWrapper : NSObject <FxMetaPlugWrapper>

- (id)defaultFolderURLs;
- (id)fxMetaPlugsInFolderURLs:(id)arg1 includingBuiltIns:(bool)arg2;
- (Class)plugInClass;
- (id)plugInTypeUUID;

@end
