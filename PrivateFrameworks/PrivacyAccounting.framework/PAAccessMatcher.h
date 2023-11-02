
@interface PAAccessMatcher : NSObject <NSCopying> {
    PAAccess * _access;
    unsigned long long  _options;
}

@property (nonatomic, readonly) PAAccess *access;
@property (nonatomic, readonly) unsigned long long options;

+ (id)coalescingMatcherForAccess:(id)arg1;
+ (id)negativeAccessCacheMatcherForAccess:(id)arg1;

- (void).cxx_destruct;
- (id)access;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithAccess:(id)arg1 options:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)options;

@end
