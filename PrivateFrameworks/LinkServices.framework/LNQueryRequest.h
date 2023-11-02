
@interface LNQueryRequest : NSObject <NSCopying, NSSecureCoding> {
    NSString * _entityIdentifier;
    NSString * _entityMangledTypeName;
    NSArray * _identifiersToMatch;
    NSArray * _intentMangledTypeNames;
    NSNumber * _maximumResultCount;
    LNPropertyQuery * _propertyQuery;
    NSString * _queryIdentifier;
    NSString * _queryMangledTypeName;
    long long  _requestType;
    NSArray * _sortingOptions;
    NSString * _stringToMatch;
}

@property (nonatomic, readonly, copy) NSString *entityIdentifier;
@property (nonatomic, readonly, copy) NSString *entityMangledTypeName;
@property (nonatomic, readonly) NSArray *identifiersToMatch;
@property (nonatomic, readonly, copy) NSArray *intentMangledTypeNames;
@property (nonatomic, readonly) NSNumber *maximumResultCount;
@property (nonatomic, readonly) LNPropertyQuery *propertyQuery;
@property (nonatomic, readonly, copy) NSString *queryIdentifier;
@property (nonatomic, readonly, copy) NSString *queryMangledTypeName;
@property (nonatomic, readonly) long long requestType;
@property (nonatomic, readonly) NSArray *sortingOptions;
@property (nonatomic, readonly, copy) NSString *stringToMatch;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)entityIdentifier;
- (id)entityMangledTypeName;
- (unsigned long long)hash;
- (id)identifiersToMatch;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifiers:(id)arg1 entityMangledTypeName:(id)arg2;
- (id)initWithIdentifiers:(id)arg1 entityType:(id)arg2;
- (id)initWithPropertyQuery:(id)arg1 maximumResultCount:(id)arg2 entityType:(id)arg3 intentMangledTypeNames:(id)arg4 sortingOptions:(id)arg5;
- (id)initWithPropertyQuery:(id)arg1 maximumResultCount:(id)arg2 queryMangledTypeName:(id)arg3 sortingOptions:(id)arg4;
- (id)initWithPropertyQuery:(id)arg1 maximumResultCount:(id)arg2 queryType:(id)arg3 sortingOptions:(id)arg4;
- (id)initWithRequestType:(long long)arg1 identifiersToMatch:(id)arg2 stringToMatch:(id)arg3 propertyQuery:(id)arg4 maximumResultCount:(id)arg5 entityIdentifier:(id)arg6 entityMangledTypeName:(id)arg7 queryIdentifier:(id)arg8 queryMangledTypeName:(id)arg9 intentMangledTypeNames:(id)arg10 sortingOptions:(id)arg11;
- (id)initWithString:(id)arg1 entityMangledTypeName:(id)arg2;
- (id)initWithString:(id)arg1 entityType:(id)arg2;
- (id)intentMangledTypeNames;
- (bool)isEqual:(id)arg1;
- (id)maximumResultCount;
- (id)propertyQuery;
- (id)queryIdentifier;
- (id)queryMangledTypeName;
- (long long)requestType;
- (id)sortingOptions;
- (id)stringToMatch;

@end
