
@interface MISignatureAgnosticHasher : NSObject {
    unsigned int  _countOfSlicesWithNamedSection;
    int  _fd;
    bool  _hasNamedSection;
    NSDictionary * _hashes;
    NSString * _sectionName;
    NSURL * _url;
}

@property (nonatomic) unsigned int countOfSlicesWithNamedSection;
@property (nonatomic) int fd;
@property (nonatomic, readonly) bool hasNamedSection;
@property (nonatomic, readonly) NSDictionary *hashes;
@property (nonatomic, readonly) NSString *sectionName;
@property (nonatomic, readonly) NSURL *url;

+ (id)packedNumberForCPUType:(int)arg1 subtype:(int)arg2;
+ (void)unpackPackedCpuTypeAndSubType:(id)arg1 cputype:(int*)arg2 subtype:(int*)arg3;

- (void).cxx_destruct;
- (id)_hashSliceAtOffset:(long long)arg1 withSize:(long long)arg2 machHeaderAndCommands:(const struct mach_header { unsigned int x1; int x2; int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; }*)arg3 dictionaryKey:(id*)arg4 error:(id*)arg5;
- (unsigned int)countOfSlicesWithNamedSection;
- (void)dealloc;
- (int)fd;
- (bool)hasNamedSection;
- (id)hashes;
- (id)initWithExecutable:(id)arg1 searchForSectionNamed:(id)arg2;
- (bool)performHashWithError:(id*)arg1;
- (id)sectionName;
- (void)setCountOfSlicesWithNamedSection:(unsigned int)arg1;
- (void)setFd:(int)arg1;
- (id)url;

@end
