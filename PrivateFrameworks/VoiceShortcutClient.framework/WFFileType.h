
@interface WFFileType : WFType {
    NSString * _OSType;
    NSString * _pboardType;
    NSString * _string;
    NSDictionary * _typeDeclaration;
    UTType * _utType;
}

@property (nonatomic, readonly) NSString *MIMEType;
@property (nonatomic, readonly) NSString *OSType;
@property (getter=isCoreType, nonatomic, readonly) bool coreType;
@property (getter=isDeclared, nonatomic, readonly) bool declared;
@property (nonatomic, readonly) WFImage *documentIcon;
@property (getter=isDynamic, nonatomic, readonly) bool dynamic;
@property (nonatomic, readonly) NSString *fileExtension;
@property (nonatomic, readonly) NSString *pboardType;
@property (nonatomic, readonly, copy) NSString *string;
@property (nonatomic, readonly) NSDictionary *typeDeclaration;
@property (nonatomic, readonly) NSString *typeDescription;
@property (nonatomic, readonly) NSArray *typesConformedTo;
@property (nonatomic, readonly) UTType *utType;

+ (id)fileTypeCache;
+ (bool)supportsSecureCoding;
+ (id)typeForTagClass:(id)arg1 tag:(id)arg2;
+ (id)typeFromFileExtension:(id)arg1;
+ (id)typeFromFilename:(id)arg1;
+ (id)typeFromMIMEType:(id)arg1;
+ (id)typeFromPasteboardType:(id)arg1;
+ (id)typeWithString:(id)arg1;
+ (id)typeWithUTType:(id)arg1;
+ (id)typeWithUTType:(id)arg1 string:(id)arg2;
+ (id)typesForTagClass:(id)arg1 tag:(id)arg2 conformingToType:(id)arg3;
+ (id)typesFromStrings:(id)arg1;
+ (id)typesFromUTTypes:(id)arg1;
+ (id)typesFromUTTypes:(id)arg1 excludingType:(id)arg2;

- (void).cxx_destruct;
- (id)MIMEType;
- (id)OSType;
- (id)conformingTypesWithFileExtension:(id)arg1;
- (id)conformingTypesWithMIMEType:(id)arg1;
- (id)conformingTypesWithTagClass:(id)arg1 tag:(id)arg2;
- (bool)conformsToString:(id)arg1;
- (bool)conformsToType:(id)arg1;
- (bool)conformsToUTType:(id)arg1;
- (bool)conformsToUTTypes:(id)arg1;
- (id)documentIcon;
- (void)encodeWithCoder:(id)arg1;
- (id)fileExtension;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithUTType:(id)arg1;
- (id)initWithUTType:(id)arg1 string:(id)arg2;
- (bool)isCoreType;
- (bool)isDeclared;
- (bool)isDynamic;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToString:(id)arg1;
- (bool)isEqualToType:(id)arg1;
- (bool)isEqualToUTType:(id)arg1;
- (id)pboardType;
- (id)string;
- (id)typeDeclaration;
- (id)typeDescription;
- (id)typesConformedTo;
- (id)utType;

@end
