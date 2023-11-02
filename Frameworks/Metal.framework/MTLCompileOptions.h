
@interface MTLCompileOptions : NSObject <NSCopying>

@property (nonatomic, copy) NSString *additionalCompilerArguments;
@property (nonatomic) bool allowReferencingUndefinedSymbols;
@property (nonatomic) long long compileSymbolVisibility;
@property (nonatomic) bool compileTimeStatisticsEnabled;
@property (nonatomic) bool debuggingEnabled;
@property (nonatomic) bool fastMathEnabled;
@property (nonatomic) bool glBufferBindPoints;
@property (nonatomic, copy) NSString *installName;
@property (nonatomic) unsigned long long languageVersion;
@property (nonatomic, copy) NSArray *libraries;
@property (nonatomic) long long libraryType;
@property (nonatomic) unsigned long long maxTotalThreadsPerThreadgroup;
@property (nonatomic) long long optimizationLevel;
@property (nonatomic, copy) NSDictionary *preprocessorMacros;
@property (nonatomic) bool preserveInvariance;
@property (nonatomic) unsigned char sourceLanguage;
@property (nonatomic) bool tracingEnabled;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
