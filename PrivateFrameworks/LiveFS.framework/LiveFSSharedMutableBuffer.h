
@interface LiveFSSharedMutableBuffer : NSObject <NSSecureCoding> {
    unsigned long long  _capacity;
    bool  _isIOWMD;
    unsigned long long  _length;
    LiveFSMemoryMap * _memMap;
    unsigned int  _mp;
    unsigned long long  _vma;
}

@property unsigned long long length;

+ (id)bufferWithCapacity:(unsigned long long)arg1;
+ (id)bufferWithLength:(unsigned long long)arg1;
+ (id)dataWithCapacity:(unsigned long long)arg1;
+ (id)dataWithLength:(unsigned long long)arg1;
+ (id)newByCopyingPort:(unsigned int)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (const void*)bytes;
- (Class)classForCoder;
- (id)createDispatchData;
- (void)createMappingAt:(unsigned long long)arg1 options:(unsigned int)arg2 startingAtOffset:(unsigned long long)arg3 forLength:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (void)createMappingForVMAAt:(unsigned long long)arg1 options:(unsigned int)arg2 startingAtOffset:(unsigned long long)arg3 forLength:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (void)dealloc;
- (void)detachBytes;
- (void)encodeWithCoder:(id)arg1;
- (bool)ensureMapped;
- (bool)ensureMappedIOMD;
- (bool)ensureMappedMB:(unsigned long long)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithCapacity:(unsigned long long)arg1 andLength:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithLength:(unsigned long long)arg1;
- (id)initWithMachPort:(unsigned int)arg1 capacity:(unsigned long long)arg2 length:(unsigned long long)arg3 wrapsIOWMD:(bool)arg4;
- (unsigned long long)length;
- (void*)mutableBytes;
- (void)setLength:(unsigned long long)arg1;

@end
