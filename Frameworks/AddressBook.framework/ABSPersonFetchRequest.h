
@interface ABSPersonFetchRequest : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _additionalKeysToFetch;
    NSPredicate * _predicate;
    unsigned int  _sortOrder;
}

@property (readonly, copy) NSArray *additionalKeysToFetch;
@property (readonly, copy) NSPredicate *predicate;
@property (readonly) unsigned int sortOrder;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalKeysToFetch;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionOfKeysToFetch;
- (id)descriptionOfSortOrder;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicate:(id)arg1 additionalKeysToFetch:(id)arg2 sortOrder:(unsigned int)arg3;
- (bool)isEqual:(id)arg1;
- (id)predicate;
- (unsigned int)sortOrder;

@end
