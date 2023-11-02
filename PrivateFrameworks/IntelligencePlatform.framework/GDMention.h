
@interface GDMention : NSObject <NSCopying, NSSecureCoding> {
    NSString * _entityClass;
    NSNumber * _score;
    GDSpan * _span;
}

@property (nonatomic, readonly, copy) NSString *entityClass;
@property (nonatomic, readonly, copy) NSNumber *score;
@property (nonatomic, readonly, copy) GDSpan *span;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entityClass;
- (id)initWithCoder:(id)arg1;
- (id)initWithSpan:(id)arg1 entityClass:(id)arg2 score:(id)arg3;
- (id)score;
- (id)span;

@end
