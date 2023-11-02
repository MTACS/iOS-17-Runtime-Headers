
@interface FPDMoveAtom : NSObject {
    unsigned char  _kind;
    unsigned long long  _materializeOption;
    FPActionOperationLocator * _root;
    FPActionOperationLocator * _source;
    FPActionOperationLocator * _targetFolder;
    unsigned long long  _targetMaterializeOption;
    NSString * _targetName;
    bool  _useAtomicMove;
    bool  _useDiskWriter;
}

@property (nonatomic, readonly) unsigned char kind;
@property (nonatomic, readonly) unsigned long long materializeOption;
@property (nonatomic, readonly) FPActionOperationLocator *root;
@property (nonatomic, readonly) FPActionOperationLocator *source;
@property (nonatomic, readonly) FPActionOperationLocator *targetFolder;
@property (nonatomic, readonly) unsigned long long targetMaterializeOption;
@property (nonatomic, readonly) NSString *targetName;
@property (nonatomic, readonly) bool useAtomicMove;
@property (nonatomic, readonly) bool useDiskWriter;

+ (id)atomForMoving:(id)arg1 toTargetFolder:(id)arg2 as:(id)arg3 root:(id)arg4 atomically:(bool)arg5 sourceMaterializeOption:(unsigned long long)arg6 targetMaterializeOption:(unsigned long long)arg7 useDiskWriter:(bool)arg8;
+ (id)atomForPostFolderUnderRoot:(id)arg1 atomically:(bool)arg2 useDiskWriter:(bool)arg3;

- (void).cxx_destruct;
- (id)description;
- (id)initWithKind:(unsigned char)arg1 source:(id)arg2 targetName:(id)arg3 targetFolder:(id)arg4 root:(id)arg5 atomically:(bool)arg6 sourceMaterializeOption:(unsigned long long)arg7 targetMaterializeOption:(unsigned long long)arg8 useDiskWriter:(bool)arg9;
- (unsigned char)kind;
- (unsigned long long)materializeOption;
- (id)root;
- (bool)shouldAccountForDownloadOfSourceItemForMoveInfo:(id)arg1 extensionManager:(id)arg2;
- (id)source;
- (id)targetFolder;
- (unsigned long long)targetMaterializeOption;
- (id)targetName;
- (bool)useAtomicMove;
- (bool)useDiskWriter;

@end
