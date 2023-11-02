
@interface PLFilesystemIterator : NSObject {
    bool  _continueAfterError;
    NSError * _error;
    NSFileManager * _fileManager;
    NSString * _path;
}

@property bool continueAfterError;
@property (readonly, copy) NSError *error;

- (void).cxx_destruct;
- (bool)continueAfterError;
- (id)error;
- (id)initWithFilePath:(id)arg1;
- (void)setContinueAfterError:(bool)arg1;
- (void)visitURLsLoadingPropertiesForKeys:(id)arg1 withBlock:(id /* block */)arg2;

@end
