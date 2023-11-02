
@interface TRIFBFactorMetadataKeyValue : NSObject <AFBBufferReferencing, NSCopying> {
    AFBBufRef * _br;
    const struct FactorMetadataKeyValue { unsigned char x1[1]; } * _ptr;
}

@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) const char *keyAsCString;
@property (nonatomic, readonly) NSData *keyAsData;
@property (nonatomic, readonly) NSString *val;
@property (nonatomic, readonly) const char *valAsCString;
@property (nonatomic, readonly) NSData *valAsData;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deepCopyUsingBufferBuilder:(id)arg1;
- (id)deepCopyUsingBufferBuilder:(id)arg1 changes:(id)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initVerifiedRootObjectFromData:(id)arg1;
- (id)initVerifiedRootObjectFromData:(id)arg1 requireUTF8:(bool)arg2;
- (id)initVerifiedRootObjectFromData:(id)arg1 requireUTF8:(bool)arg2 maxDepth:(unsigned int)arg3 maxTables:(unsigned int)arg4;
- (id)initWithBufRef:(id)arg1 cppPointer:(const struct FactorMetadataKeyValue { unsigned char x1[1]; }*)arg2;
- (id)initWithBufRef:(id)arg1 rawPointer:(const void*)arg2;
- (bool)isEqual:(id)arg1;
- (id)key;
- (const char *)keyAsCString;
- (id)keyAsData;
- (id)val;
- (const char *)valAsCString;
- (id)valAsData;
- (bool)verifyUTF8Fields;

@end
