
@interface MBFileManager : NSObject

+ (id)defaultManager;

- (bool)copyPath:(id)arg1 toPath:(id)arg2;
- (bool)createDirectoryAtPath:(id)arg1 attributes:(id)arg2;
- (id)directoryContentsAtPath:(id)arg1;
- (id)fileAttributesAtPath:(id)arg1 traverseLink:(bool)arg2;
- (bool)fileExistsAtPath:(id)arg1;
- (bool)movePath:(id)arg1 toPath:(id)arg2;
- (bool)removeFileAtPath:(id)arg1;

@end
