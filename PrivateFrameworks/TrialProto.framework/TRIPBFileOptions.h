
@interface TRIPBFileOptions : TRIPBMessage

@property (nonatomic) bool ccEnableArenas;
@property (nonatomic) bool ccGenericServices;
@property (nonatomic, copy) NSString *csharpNamespace;
@property (nonatomic) bool deprecated;
@property (nonatomic, copy) NSString *goPackage;
@property (nonatomic) bool hasCcEnableArenas;
@property (nonatomic) bool hasCcGenericServices;
@property (nonatomic) bool hasCsharpNamespace;
@property (nonatomic) bool hasDeprecated;
@property (nonatomic) bool hasGoPackage;
@property (nonatomic) bool hasJavaGenerateEqualsAndHash;
@property (nonatomic) bool hasJavaGenericServices;
@property (nonatomic) bool hasJavaMultipleFiles;
@property (nonatomic) bool hasJavaOuterClassname;
@property (nonatomic) bool hasJavaPackage;
@property (nonatomic) bool hasJavaStringCheckUtf8;
@property (nonatomic) bool hasObjcClassPrefix;
@property (nonatomic) bool hasOptimizeFor;
@property (nonatomic) bool hasPhpClassPrefix;
@property (nonatomic) bool hasPhpGenericServices;
@property (nonatomic) bool hasPhpMetadataNamespace;
@property (nonatomic) bool hasPhpNamespace;
@property (nonatomic) bool hasPyGenericServices;
@property (nonatomic) bool hasRubyPackage;
@property (nonatomic) bool hasSwiftPrefix;
@property (nonatomic) bool javaGenerateEqualsAndHash;
@property (nonatomic) bool javaGenericServices;
@property (nonatomic) bool javaMultipleFiles;
@property (nonatomic, copy) NSString *javaOuterClassname;
@property (nonatomic, copy) NSString *javaPackage;
@property (nonatomic) bool javaStringCheckUtf8;
@property (nonatomic, copy) NSString *objcClassPrefix;
@property (nonatomic) int optimizeFor;
@property (nonatomic, copy) NSString *phpClassPrefix;
@property (nonatomic) bool phpGenericServices;
@property (nonatomic, copy) NSString *phpMetadataNamespace;
@property (nonatomic, copy) NSString *phpNamespace;
@property (nonatomic) bool pyGenericServices;
@property (nonatomic, copy) NSString *rubyPackage;
@property (nonatomic, copy) NSString *swiftPrefix;
@property (nonatomic, retain) NSMutableArray *uninterpretedOptionArray;
@property (nonatomic, readonly) unsigned long long uninterpretedOptionArray_Count;

+ (id)descriptor;

@end
