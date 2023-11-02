
@interface TRIFBFactorLevel : NSObject <AFBBufferReferencing, NSCopying> {
    AFBBufRef * _br;
    const struct FactorLevel { unsigned char x1[1]; } * _ptr;
}

@property (nonatomic, readonly) NSString *alias;
@property (nonatomic, readonly) const char *aliasAsCString;
@property (nonatomic, readonly) NSData *aliasAsData;
@property (nonatomic, readonly) unsigned int cacheKey;
@property (nonatomic, readonly) NSString *factorId;
@property (nonatomic, readonly) const char *factorIdAsCString;
@property (nonatomic, readonly) NSData *factorIdAsData;
@property (nonatomic, readonly) NSString *factorNamespaceName;
@property (nonatomic, readonly) const char *factorNamespaceNameAsCString;
@property (nonatomic, readonly) NSData *factorNamespaceNameAsData;
@property (nonatomic, readonly) bool hasCacheKey;
@property (nonatomic, readonly) bool hasNamespaceId;
@property (nonatomic, readonly) TRIFBBoxedBool *levelAsBoolVal;
@property (nonatomic, readonly) TRIFBBoxedDouble *levelAsDoubleVal;
@property (nonatomic, readonly) TRIFBBoxedInt64 *levelAsInt64Val;
@property (nonatomic, readonly) TRIFBMobileAssetReference *levelAsMaRefVal;
@property (nonatomic, readonly) NSString *levelAsStringVal;
@property (nonatomic, readonly) const char *levelAsStringValCString;
@property (nonatomic, readonly) NSData *levelAsStringValData;
@property (nonatomic, readonly) TRIFBTrialManagedAsset *levelAsTrialAssetVal;
@property (nonatomic, readonly) unsigned char levelType;
@property (nonatomic, readonly) NSArray *metadata;
@property (nonatomic, readonly) NSDictionary *metadataAsDict;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) const char *nameAsCString;
@property (nonatomic, readonly) NSData *nameAsData;
@property (nonatomic, readonly) unsigned int namespaceId;

- (void).cxx_destruct;
- (id)alias;
- (const char *)aliasAsCString;
- (id)aliasAsData;
- (unsigned int)cacheKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deepCopyUsingBufferBuilder:(id)arg1;
- (id)deepCopyUsingBufferBuilder:(id)arg1 changes:(id)arg2;
- (id)factorId;
- (const char *)factorIdAsCString;
- (id)factorIdAsData;
- (id)factorNamespaceName;
- (const char *)factorNamespaceNameAsCString;
- (id)factorNamespaceNameAsData;
- (bool)hasCacheKey;
- (bool)hasNamespaceId;
- (unsigned long long)hash;
- (id)init;
- (id)initVerifiedRootObjectFromData:(id)arg1;
- (id)initVerifiedRootObjectFromData:(id)arg1 requireUTF8:(bool)arg2;
- (id)initVerifiedRootObjectFromData:(id)arg1 requireUTF8:(bool)arg2 maxDepth:(unsigned int)arg3 maxTables:(unsigned int)arg4;
- (id)initWithBufRef:(id)arg1 cppPointer:(const struct FactorLevel { unsigned char x1[1]; }*)arg2;
- (id)initWithBufRef:(id)arg1 rawPointer:(const void*)arg2;
- (bool)isEqual:(id)arg1;
- (id)levelAsBoolVal;
- (id)levelAsDoubleVal;
- (id)levelAsInt64Val;
- (id)levelAsMaRefVal;
- (id)levelAsStringVal;
- (const char *)levelAsStringValCString;
- (id)levelAsStringValData;
- (id)levelAsTrialAssetVal;
- (unsigned char)levelType;
- (id)metadata;
- (id)metadataAsDict;
- (id)name;
- (const char *)nameAsCString;
- (id)nameAsData;
- (unsigned int)namespaceId;
- (bool)verifyUTF8Fields;

@end
