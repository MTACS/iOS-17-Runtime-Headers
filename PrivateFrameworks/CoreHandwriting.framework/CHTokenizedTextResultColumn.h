
@interface CHTokenizedTextResultColumn : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSArray * _tokenRows;
}

@property (nonatomic, readonly) NSIndexSet *strokeIndexes;
@property (nonatomic, readonly, copy) NSArray *tokenRows;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)containsStartingTokenEquivalentToToken:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (long long)indexOfEquivalentTokenRow:(id)arg1 tokenRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTokenRows:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)strokeIndexes;
- (id)tokenRows;

@end
