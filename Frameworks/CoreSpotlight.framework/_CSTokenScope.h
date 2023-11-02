
@interface _CSTokenScope : NSObject <NSCopying, NSSecureCoding> {
    NSMutableSet * _queryTemplates;
    long long  _scopeType;
    NSString * _title;
    NSString * _tokenTitle;
}

@property (nonatomic, retain) NSMutableSet *queryTemplates;
@property (nonatomic) long long scopeType;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *tokenTitle;

+ (id)scopesFromCSTokenScopes:(id)arg1 displayString:(id)arg2 handles:(id)arg3;
+ (bool)supportsSecureCoding;
+ (id)tokenScopesForAllTokens;
+ (id)tokenScopesForAttachmentNameContains;
+ (id)tokenScopesForAttachmentType;
+ (id)tokenScopesForMessageWithAttachments;
+ (id)tokenScopesForPerson;
+ (id)tokenScopesForSenderContains;
+ (id)tokenScopesForSubjectContains;
+ (id)tokenScopesWithTitles:(id)arg1 tokenTitles:(id)arg2 scopeTypes:(id)arg3 queryAttributesList:(id)arg4;
+ (id)tokenScopesWithTitles:(id)arg1 tokenTitles:(id)arg2 scopeTypes:(id)arg3 queryAttributesList:(id)arg4 modifiers:(id)arg5;

- (void).cxx_destruct;
- (void)addQueryAttributes:(id)arg1;
- (void)addQueryAttributes:(id)arg1 modifier:(id)arg2;
- (void)addQueryTemplate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 tokenTitle:(id)arg2 scopeType:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTokenScope:(id)arg1;
- (id)queryForHandles:(id)arg1;
- (id)queryTemplates;
- (long long)scopeType;
- (void)setQueryTemplates:(id)arg1;
- (void)setScopeType:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTokenTitle:(id)arg1;
- (id)title;
- (id)tokenTitle;

@end
