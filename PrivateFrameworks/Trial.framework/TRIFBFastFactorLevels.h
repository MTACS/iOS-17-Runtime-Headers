
@interface TRIFBFastFactorLevels : NSObject <AFBBufferReferencing, NSCopying> {
    AFBBufRef * _br;
    const struct FastFactorLevels { unsigned char x1[1]; } * _ptr;
}

@property (nonatomic, readonly) NSArray *levels;
@property (nonatomic, readonly) NSDictionary *levelsAsDict;
@property (nonatomic, readonly) NSString *namespaceName;
@property (nonatomic, readonly) const char *namespaceNameAsCString;
@property (nonatomic, readonly) NSData *namespaceNameAsData;
@property (nonatomic, readonly) NSArray *ncvs;
@property (nonatomic, readonly) NSString *sourceAsFactorPackId;
@property (nonatomic, readonly) const char *sourceAsFactorPackIdCString;
@property (nonatomic, readonly) NSData *sourceAsFactorPackIdData;
@property (nonatomic, readonly) NSString *sourceAsTreatmentId;
@property (nonatomic, readonly) const char *sourceAsTreatmentIdCString;
@property (nonatomic, readonly) NSData *sourceAsTreatmentIdData;
@property (nonatomic, readonly) unsigned char sourceType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deepCopyUsingBufferBuilder:(id)arg1;
- (id)deepCopyUsingBufferBuilder:(id)arg1 changes:(id)arg2;
- (bool)enumerateNcvsUsingBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initVerifiedRootObjectFromData:(id)arg1;
- (id)initVerifiedRootObjectFromData:(id)arg1 requireUTF8:(bool)arg2;
- (id)initVerifiedRootObjectFromData:(id)arg1 requireUTF8:(bool)arg2 maxDepth:(unsigned int)arg3 maxTables:(unsigned int)arg4;
- (id)initWithBufRef:(id)arg1 cppPointer:(const struct FastFactorLevels { unsigned char x1[1]; }*)arg2;
- (id)initWithBufRef:(id)arg1 rawPointer:(const void*)arg2;
- (bool)isEqual:(id)arg1;
- (id)levels;
- (id)levelsAsDict;
- (id)namespaceName;
- (const char *)namespaceNameAsCString;
- (id)namespaceNameAsData;
- (id)ncvs;
- (const unsigned int*)ncvsAsCArrayWithCount:(unsigned long long*)arg1;
- (id)sourceAsFactorPackId;
- (const char *)sourceAsFactorPackIdCString;
- (id)sourceAsFactorPackIdData;
- (id)sourceAsTreatmentId;
- (const char *)sourceAsTreatmentIdCString;
- (id)sourceAsTreatmentIdData;
- (unsigned char)sourceType;
- (bool)verifyUTF8Fields;

@end
