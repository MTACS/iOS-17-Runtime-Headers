
@interface GDRankerResult : NSObject <NSCopying, NSSecureCoding> {
    NSString * _entityClass;
    NSArray * _rankedItems;
    GDSpan * _span;
}

@property (nonatomic, readonly, copy) NSString *entityClass;
@property (nonatomic, readonly, copy) NSArray *rankedItems;
@property (nonatomic, readonly, copy) GDSpan *span;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entityClass;
- (id)initWithCoder:(id)arg1;
- (id)initWithRankedEntities:(id)arg1;
- (id)initWithSpan:(id)arg1 rankedEntities:(id)arg2 entityClass:(id)arg3;
- (id)rankedItems;
- (id)span;

@end
