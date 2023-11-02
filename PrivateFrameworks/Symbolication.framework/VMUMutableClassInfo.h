
@interface VMUMutableClassInfo : VMUClassInfo

@property (nonatomic, copy) NSString *binaryPath;
@property (nonatomic) unsigned int defaultScanType;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic) unsigned int infoType;
@property (nonatomic) unsigned int instanceSize;
@property (nonatomic) bool isCoreMediaFigObject;
@property (nonatomic) bool isRootClass;
@property (nonatomic, retain) VMUClassInfo *superclassInfo;

- (void)addComplexAction:(id /* block */)arg1 withEvaluator:(id /* block */)arg2;
- (void)addFields:(id)arg1;
- (void)addVariant:(id)arg1 forField:(id)arg2 withEvaluator:(id /* block */)arg3;
- (void)addVariantRecursively:(id)arg1 forField:(id)arg2 withEvaluator:(id /* block */)arg3;
- (void)mutateTypeFieldsRecursivelyWithBlock:(id /* block */)arg1;
- (void)mutateTypeFieldsWithBlock:(id /* block */)arg1;
- (void)replaceField:(id)arg1 withFields:(id)arg2;
- (void)replaceFieldRecursively:(id)arg1 withField:(id)arg2;
- (void)setBinaryPath:(id)arg1;
- (void)setDefaultScanType:(unsigned int)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setFields:(id)arg1;
- (void)setInfoType:(unsigned int)arg1;
- (void)setInstanceSize:(unsigned int)arg1;
- (void)setIsCoreMediaFigObject:(bool)arg1;
- (void)setIsRootClass:(bool)arg1;
- (void)setSuperclassInfo:(id)arg1;
- (void)setVariantScanType:(unsigned int)arg1 withEvaluator:(id /* block */)arg2;

@end
