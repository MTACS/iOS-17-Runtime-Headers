
@interface _EXQuery : NSObject <NSCopying, NSSecureCoding> {
    bool  _allowsDuplicates;
    NSArray * _extensionPointRecords;
    bool  _includePostprocessing;
    unsigned long long  _resultType;
}

@property (nonatomic) bool allowsDuplicates;
@property (retain) NSString *extensionPointIdentifier;
@property (readonly) NSArray *extensionPointRecords;
@property struct { unsigned int x1[8]; } hostAuditToken;
@property (nonatomic) bool includePostprocessing;
@property unsigned int platform;
@property (retain) NSPredicate *predicate;
@property unsigned long long resultType;

+ (id)allExtensionsQuery;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)executeQueries:(id)arg1;
+ (void)executeQueries:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)executeQuery:(id)arg1;
+ (void)executeQuery:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)extensionPointIdentifierQuery:(id)arg1;
+ (id)extensionPointIdentifierQuery:(id)arg1 platform:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (bool)allowsDuplicates;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionPointRecords;
- (bool)includePostprocessing;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtensionPoint:(id)arg1;
- (id)initWithExtensionPointIdentifier:(id)arg1;
- (id)initWithExtensionPointIdentifier:(id)arg1 platform:(unsigned int)arg2;
- (id)initWithExtensionPointIdentifier:(id)arg1 predicate:(id)arg2;
- (bool)matches:(id)arg1;
- (bool)matchesRecord:(id)arg1;
- (unsigned long long)resultType;
- (void)setAllowsDuplicates:(bool)arg1;
- (void)setIncludePostprocessing:(bool)arg1;
- (void)setResultType:(unsigned long long)arg1;

@end
