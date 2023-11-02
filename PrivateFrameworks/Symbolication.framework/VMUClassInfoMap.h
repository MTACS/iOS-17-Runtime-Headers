
@interface VMUClassInfoMap : NSObject <NSSecureCoding> {
    void * _classInfoMap1;
    void * _classInfoMap2;
    void * _fieldInfoMap1;
    void * _fieldInfoMap2;
    NSMutableArray * _linearClassInfos;
    NSMutableArray * _linearFieldInfos;
}

@property (nonatomic, readonly) unsigned int count;
@property (nonatomic, readonly) unsigned int fieldInfoCount;
@property (nonatomic, readonly) bool hasClassInfosDerivedFromStackBacktraces;

+ (void)_destroyRetainedLinearArray:(id*)arg1 withCount:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_applyTypeOverlay:(id)arg1;
- (id*)_retainedLinearArrayWithReturnedCount:(unsigned int*)arg1;
- (unsigned int)addClassInfo:(id)arg1 forAddress:(unsigned long long)arg2;
- (void)addClassInfosFromMap:(id)arg1;
- (unsigned int)addFieldInfo:(id)arg1;
- (id)classInfoForAddress:(unsigned long long)arg1;
- (id)classInfoForIndex:(unsigned int)arg1;
- (unsigned int)count;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateInfosWithBlock:(id /* block */)arg1;
- (unsigned int)fieldInfoCount;
- (id)fieldInfoForIndex:(unsigned int)arg1;
- (bool)hasClassInfosDerivedFromStackBacktraces;
- (unsigned int)indexForClassInfo:(id)arg1;
- (unsigned int)indexForFieldInfo:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)memoizeSwiftField:(id)arg1 withName:(const char *)arg2 offset:(unsigned int)arg3 kind:(unsigned int)arg4 typeref:(struct swift_typeref_interop { unsigned long long x1; int x2; })arg5;
- (id)swiftFieldWithName:(const char *)arg1 offset:(unsigned int)arg2 kind:(unsigned int)arg3 typeref:(struct swift_typeref_interop { unsigned long long x1; int x2; })arg4;

@end
