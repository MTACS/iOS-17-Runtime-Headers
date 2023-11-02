
@interface ESDRoot : ESDObject {
    NSMutableArray * mChildren;
}

- (void).cxx_destruct;
- (void)addChild:(id)arg1;
- (id)childAt:(unsigned long long)arg1;
- (unsigned long long)childCount;
- (void*)eshRoot;
- (id)init;
- (id)initFromReader:(struct OcReader { int (**x1)(); struct EshObjectFactory {} *x2; }*)arg1;
- (id)initWithEshObject:(struct EshObject { int (**x1)(); unsigned short x2; }*)arg1;
- (id)initWithPbState:(id)arg1;
- (id)pbReferenceWithID:(unsigned int)arg1;
- (void)writeToWriter:(struct OcWriter { }*)arg1;

@end
