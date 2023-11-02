
@interface PKPassAnnotations : NSObject <NSCopying, NSSecureCoding> {
    long long  _sortingState;
}

@property (nonatomic) long long sortingState;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSortingState:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (void)setSortingState:(long long)arg1;
- (long long)sortingState;

@end
