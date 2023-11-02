
@interface GDEntityResolutionResult : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _rankedResults;
}

@property (nonatomic, readonly, copy) NSArray *rankedResults;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRankedResults:(id)arg1;
- (id)rankedResults;

@end
