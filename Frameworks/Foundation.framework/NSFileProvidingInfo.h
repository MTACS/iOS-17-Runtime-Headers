
@interface NSFileProvidingInfo : NSObject <NSSecureCoding> {
    NSFileProviderKernelMaterializationInfo * kernelMaterializationInfo;
    struct { 
        unsigned int val[8]; 
    }  readerAuditToken;
    NSString * readerID;
    unsigned long long  readingOptions;
    unsigned long long  recursiveGenerationCount;
}

@property (readonly) NSFileProviderKernelMaterializationInfo *kernelMaterializationInfo;
@property (readonly) struct { unsigned int x1[8]; } readerAuditToken;
@property (readonly, copy) NSString *readerID;
@property (readonly) unsigned long long readingOptions;

+ (id)infoWithReaderID:(id)arg1 options:(unsigned long long)arg2 auditToken:(struct { unsigned int x1[8]; })arg3 kernelMaterializationInfo:(id)arg4;
+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)kernelMaterializationInfo;
- (struct { unsigned int x1[8]; })readerAuditToken;
- (id)readerID;
- (unsigned long long)readingOptions;
- (void)setProvidedItemRecursiveGenerationCount:(unsigned long long)arg1;

@end
