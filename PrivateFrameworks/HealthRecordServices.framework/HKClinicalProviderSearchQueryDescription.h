
@interface HKClinicalProviderSearchQueryDescription : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _latitude;
    NSNumber * _longitude;
    unsigned long long  _options;
    long long  _pageOffset;
    NSString * _searchString;
}

@property (nonatomic, readonly, copy) NSNumber *latitude;
@property (nonatomic, readonly, copy) NSNumber *longitude;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) long long pageOffset;
@property (nonatomic, readonly, copy) NSString *searchString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchString:(id)arg1 latitude:(id)arg2 longitude:(id)arg3 pageOffset:(long long)arg4 options:(unsigned long long)arg5;
- (bool)isEqual:(id)arg1;
- (id)latitude;
- (id)longitude;
- (unsigned long long)options;
- (long long)pageOffset;
- (id)searchString;

@end
