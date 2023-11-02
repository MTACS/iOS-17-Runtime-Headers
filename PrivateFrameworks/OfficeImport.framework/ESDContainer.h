
@interface ESDContainer : ESDObject {
    NSMutableArray * mChildren;
}

+ (void)pbReadChildrenOfObject:(struct EshObject { int (**x1)(); unsigned short x2; }*)arg1 toArray:(id)arg2 state:(id)arg3;
+ (void)readChildrenOfObject:(struct EshObject { int (**x1)(); unsigned short x2; }*)arg1 reader:(struct OcReader { }*)arg2 toArray:(id)arg3;

- (void).cxx_destruct;
- (struct EshObject { int (**x1)(); unsigned short x2; }*)addAtomChildOfType:(unsigned short)arg1;
- (void)addCStringWithChar2String:(const unsigned short*)arg1 instance:(int)arg2;
- (void)addCStringWithNSString:(id)arg1 instance:(int)arg2;
- (void)addChild:(id)arg1;
- (id)addChildOfType:(unsigned short)arg1;
- (id)addContainerChildOfType:(unsigned short)arg1;
- (id)addEshChild:(struct EshObject { int (**x1)(); unsigned short x2; }*)arg1;
- (struct EshObject { int (**x1)(); unsigned short x2; }*)addPptAtomChildOfType:(unsigned short)arg1;
- (id)addPptContainerChildOfType:(unsigned short)arg1;
- (id)addPptEshClientChildOfType:(unsigned short)arg1;
- (id)childAt:(unsigned long long)arg1;
- (unsigned long long)childCount;
- (id)childOfType:(unsigned short)arg1 instance:(short)arg2;
- (id)containerChildAt:(unsigned long long)arg1;
- (id)containerChildOfType:(unsigned short)arg1 instance:(short)arg2 mustExist:(bool)arg3;
- (id)containerFromObject:(id)arg1 mustExist:(bool)arg2;
- (void*)eshContainer;
- (void*)eshGroup;
- (id)firstChildOfType:(unsigned short)arg1;
- (id)firstChildOfType:(unsigned short)arg1 afterChild:(id)arg2;
- (id)firstChildOfType:(unsigned short)arg1 afterIndex:(unsigned long long)arg2;
- (id)firstContainerChildOfType:(unsigned short)arg1 mustExist:(bool)arg2;
- (unsigned long long)indexOfFirstChildOfType:(unsigned short)arg1 afterIndex:(unsigned long long)arg2;
- (id)initForExcelBinaryWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3;
- (id)initFromReader:(struct OcReader { }*)arg1 type:(unsigned short)arg2 version:(unsigned short)arg3;
- (id)initPBWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3;
- (id)initWithEshObject:(struct EshObject { int (**x1)(); unsigned short x2; }*)arg1;
- (void)insertChild:(id)arg1 at:(unsigned long long)arg2;
- (id)insertEshChild:(struct EshObject { int (**x1)(); unsigned short x2; }*)arg1 at:(unsigned long long)arg2;
- (void)removeChild:(id)arg1;
- (id)shapeContainer;
- (void)writeToWriter:(struct OcWriter { }*)arg1;

@end
