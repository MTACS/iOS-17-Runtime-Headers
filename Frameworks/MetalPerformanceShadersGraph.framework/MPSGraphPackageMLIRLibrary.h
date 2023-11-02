
@interface MPSGraphPackageMLIRLibrary : MPSGraphObject {
    NSMutableDictionary * _mlirLibrary;
}

- (void).cxx_destruct;
- (void)addOptimizedMLIRFile:(id)arg1 withSignature:(id)arg2;
- (void)addOptimizedNoDeviceMLIRFile:(id)arg1 withSignature:(id)arg2;
- (void)addOriginalMLIRFile:(id)arg1;
- (id)getDict;
- (id)getOptimizedMLIRLibrary;
- (id)getOptimizedNoDeviceMLIRLibrary;
- (id)init;
- (id)initWithMLIRLibraryDict:(id)arg1;
- (bool)optimizedFileExistsWithSignature:(id)arg1;
- (bool)optimizedNoDeviceFileExistsWithSignature:(id)arg1;
- (bool)originalFileExists;
- (void)updateWithMLIRLibrary:(id)arg1;

@end
