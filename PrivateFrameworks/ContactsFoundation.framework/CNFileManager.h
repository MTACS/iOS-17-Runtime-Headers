
@interface CNFileManager : NSObject <CNFileManager> {
    NSFileManager * _fileManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSFileManager *fileManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)asyncDataWithContentsOfURL:(id)arg1;
- (id)asyncWriteData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3;
- (id)contentsOfDirectoryAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3;
- (id)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(bool)arg2 attributes:(id)arg3;
- (id)dataWithContentsOfURL:(id)arg1;
- (bool)fileExistsAtURL:(id)arg1;
- (bool)fileExistsAtURL:(id)arg1 isDirectory:(bool*)arg2;
- (id)fileManager;
- (bool)getValue:(id*)arg1 forExtendendAttribute:(id)arg2 url:(id)arg3 error:(id*)arg4;
- (id)init;
- (id)initWithFileManager:(id)arg1;
- (id)observableWithContentsOfURL:(id)arg1;
- (id)removeExtendedAttribute:(id)arg1 atURL:(id)arg2;
- (id)removeItemAtURL:(id)arg1;
- (id)setValue:(id)arg1 forExtendedAttribute:(id)arg2 atURL:(id)arg3;
- (id)valueForExtendedAttribute:(id)arg1 atURL:(id)arg2;
- (id)writeData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3;

@end
