
@protocol TSDHint <NSObject>

@required

+ (Class)archivedHintClass;

- (<TSDHint> *)copyForArchiving;
- (<TSDHint> *)firstChildHint;
- (<TSDHint> *)lastChildHint;
- (void)offsetByDelta:(int)arg1;
- (bool)overlapsWithSelection:(TSKSelection *)arg1;

@optional

- (struct CGSize { double x1; double x2; })effectiveSize;
- (bool)isFirstHint;
- (struct CGSize { double x1; double x2; })maximumSize;

@end
