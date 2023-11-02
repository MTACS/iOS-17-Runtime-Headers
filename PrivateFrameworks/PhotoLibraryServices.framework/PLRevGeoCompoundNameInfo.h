
@interface PLRevGeoCompoundNameInfo : NSObject <NSSecureCoding> {
    bool  _isContinuation;
    NSString * _namePrefix;
    NSString * _nameSuffix;
    NSArray * _sortedNames;
    bool  _suffixWhenPrefixOnly;
}

@property (nonatomic, readonly) bool isContinuation;
@property (nonatomic, readonly, copy) NSString *namePrefix;
@property (nonatomic, readonly, copy) NSString *nameSuffix;
@property (nonatomic, readonly, copy) NSArray *sortedNames;
@property (nonatomic, readonly) bool suffixWhenPrefixOnly;

+ (id)_localizedNameForName:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNamePrefix:(id)arg1 nameSuffix:(id)arg2 sortedNames:(id)arg3 isContinuation:(bool)arg4 suffixWhenPrefixOnly:(bool)arg5;
- (bool)isContinuation;
- (bool)isEqual:(id)arg1;
- (id)localizedSortedNames;
- (id)localizedTitleForNameInfo;
- (id)namePrefix;
- (id)nameSuffix;
- (id)sortedNames;
- (bool)suffixWhenPrefixOnly;

@end
