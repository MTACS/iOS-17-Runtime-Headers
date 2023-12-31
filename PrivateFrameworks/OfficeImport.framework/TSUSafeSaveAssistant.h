
@interface TSUSafeSaveAssistant : NSObject {
    NSURL * _saveURL;
    NSURL * _temporaryDirectoryURL;
    NSURL * _writeURL;
}

@property (nonatomic, readonly) NSURL *writeURL;

+ (bool)finishWritingToURL:(id)arg1 byMovingItemAtURL:(id)arg2 addingAttributes:(id)arg3 error:(id*)arg4;
+ (void)removeTemporaryDirectoryAtURL:(id)arg1;
+ (id)temporaryDirectoryURLForWritingToURL:(id)arg1 error:(id*)arg2;
+ (void)writeAttributes:(id)arg1 toURL:(id)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)endSaveWithSuccess:(bool)arg1 addingAttributes:(id)arg2 error:(id*)arg3;
- (bool)endSaveWithSuccess:(bool)arg1 toURL:(id)arg2 addingAttributes:(id)arg3 error:(id*)arg4;
- (id)init;
- (id)initForSavingToURL:(id)arg1 error:(id*)arg2;
- (void)removeTemporaryDirectory;
- (id)writeURL;

@end
