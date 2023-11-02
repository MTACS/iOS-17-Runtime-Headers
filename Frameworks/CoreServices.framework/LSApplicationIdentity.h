
@interface LSApplicationIdentity : LSBundleIdentity <NSCopying, NSSecureCoding, PDCApplicationIdentity, RBSWrappedLSInfoProvider> {
    NSString * _identityBookmark;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identityString;
@property (nonatomic, readonly, copy) NSString *identityString;
@property (nonatomic, readonly) unsigned long long personaType;
@property (nonatomic, readonly) NSString *personaUniqueString;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

+ (id)bundleIdentifierForIdentityString:(id)arg1 error:(id*)arg2;
+ (unsigned int)classVersion;
+ (Class)currentIdentityClass;
+ (id)enumeratorWithOptions:(unsigned long long)arg1;
+ (id)identityStringsForApplicationWithBundleIdentifier:(id)arg1 error:(id*)arg2;
+ (bool)personaWithUniqueString:(id)arg1 getPersonaType:(unsigned long long*)arg2 error:(id*)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)findApplicationRecordFetchingPlaceholder:(long long)arg1 error:(id*)arg2;
- (id)findApplicationRecordWithError:(id*)arg1;
- (unsigned long long)hash;
- (id)initForRecord:(id)arg1 personaWithAttributes:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1 URL:(id)arg2 personaUniqueString:(id)arg3 personaType:(unsigned long long)arg4;
- (id)initWithBundleIdentifier:(id)arg1 allowPlaceholder:(bool)arg2 personaUniqueString:(id)arg3 error:(id*)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentityBookmark:(id)arg1 identityString:(id)arg2 personaUniqueString:(id)arg3 personaType:(unsigned long long)arg4;
- (id)initWithIdentityString:(id)arg1;
- (id)initWithIdentityString:(id)arg1 parsedIdentityStringDictionary:(id)arg2 error:(id*)arg3;
- (bool)isEqual:(id)arg1;
- (bool)needsMigration;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

- (id)fbs_mediumDescription;
- (id)fbs_personaUniqueString;
- (id)fbs_shortDescription;

// Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices

- (id)fetchWrappedInfoWithError:(out id*)arg1;

@end
