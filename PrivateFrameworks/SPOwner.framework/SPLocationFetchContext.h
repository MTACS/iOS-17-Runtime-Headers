
@interface SPLocationFetchContext : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    NSString * _cachePolicy;
    NSDictionary * _lastOnlineLocationInfo;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _primaryIndexRange;
    NSArray * _searchIdentifiers;
    NSArray * _searchLocationSources;
    NSArray * _searchPriority;
    NSArray * _searchTypes;
    bool  _subscribe;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *cachePolicy;
@property (nonatomic, copy) NSDictionary *lastOnlineLocationInfo;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } primaryIndexRange;
@property (nonatomic, copy) NSArray *searchIdentifiers;
@property (nonatomic, copy) NSArray *searchLocationSources;
@property (nonatomic, copy) NSArray *searchPriority;
@property (nonatomic, copy) NSArray *searchTypes;
@property (nonatomic) bool subscribe;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)cachePolicy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)lastOnlineLocationInfo;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })primaryIndexRange;
- (id)searchIdentifiers;
- (id)searchLocationSources;
- (id)searchPriority;
- (id)searchTypes;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCachePolicy:(id)arg1;
- (void)setLastOnlineLocationInfo:(id)arg1;
- (void)setPrimaryIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSearchIdentifiers:(id)arg1;
- (void)setSearchLocationSources:(id)arg1;
- (void)setSearchPriority:(id)arg1;
- (void)setSearchTypes:(id)arg1;
- (void)setSubscribe:(bool)arg1;
- (bool)subscribe;

@end
