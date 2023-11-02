
@interface MPSGraphPackage : MPSGraphObject {
    NSFileManager * _fileManager;
    unsigned long long  _mlirFileCount;
    NSURL * _packageURL;
    NSMutableDictionary * _plistRoot;
    NSURL * _temporaryPackageURL;
}

- (void).cxx_destruct;
- (void)createBytecodeFromMlirModule:(struct ModuleOp { struct Operation {} *x1; })arg1 fileHandle:(id)arg2;
- (id)createFileHandle;
- (void)createVersionedBytecodeFromMlirModule:(struct ModuleOp { struct Operation {} *x1; })arg1 packageKey:(id)arg2 fileHandle:(id)arg3;
- (id)findLatestPackage;
- (id)getMLIRLibrary;
- (id)getPackageKeyForPlatform:(unsigned long long)arg1 andMinimumDeploymentTarget:(struct MPSGraphVersion { long long x1; long long x2; long long x3; })arg2;
- (id)getPlistData;
- (id)initWithPackageURL:(id)arg1 temporaryPackageURL:(id)arg2 append:(bool)arg3;
- (id)initWithSourcePackageURL:(id)arg1;
- (void)setMLIRLibrary:(id)arg1 withPackageKey:(id)arg2;

@end
