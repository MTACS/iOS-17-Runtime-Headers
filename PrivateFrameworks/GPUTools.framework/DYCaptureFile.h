
@interface DYCaptureFile : NSObject <DYCaptureVisiting> {
    bool  _alias;
    DYCaptureArchive * _archive;
    unsigned int  _file_pos;
    int  _kind_cache;
    NSString * _name;
}

@property (nonatomic, readonly) bool alias;
@property (nonatomic, readonly) DYCaptureArchive *archive;
@property (nonatomic, readonly) int kind;
@property (nonatomic, readonly, retain) NSString *name;

- (void)_determineKind;
- (id)_initWithArchive:(id)arg1 hashPosition:(unsigned int)arg2 name:(id)arg3;
- (bool)acceptCaptureVisitor:(id)arg1;
- (bool)alias;
- (id)archive;
- (id)copyData:(id*)arg1;
- (id)copyMutableData:(id*)arg1;
- (void)dealloc;
- (id)decodeArchivedObject;
- (id)decodeSerializedPropertyListWithOptions:(unsigned long long)arg1 error:(id*)arg2;
- (id)description;
- (long long)dy_numericCompare:(id)arg1;
- (bool)executable;
- (bool)getInfo:(struct { unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg1 error:(id*)arg2;
- (id)init;
- (int)kind;
- (id)name;
- (id)openFunctionStream:(id*)arg1;
- (void)updateName:(id)arg1;

@end
