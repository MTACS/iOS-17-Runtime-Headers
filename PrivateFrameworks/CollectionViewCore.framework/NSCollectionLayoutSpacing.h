
@interface NSCollectionLayoutSpacing : NSObject <NSCopying> {
    bool  _isFlexible;
    double  _spacing;
}

@property (nonatomic, readonly) bool isFixedSpacing;
@property (nonatomic, readonly) bool isFlexibleSpacing;
@property (nonatomic, readonly) double spacing;

+ (id)defaultSpacing;
+ (id)fixedSpacing:(double)arg1;
+ (id)flexibleSpacing:(double)arg1;

- (id)_externalDescription;
- (bool)_hasSpacing;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithSpacing:(double)arg1 isFlexible:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isFixedSpacing;
- (bool)isFlexibleSpacing;
- (double)spacing;

@end
