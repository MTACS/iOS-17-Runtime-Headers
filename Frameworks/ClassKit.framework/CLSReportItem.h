
@interface CLSReportItem : NSObject <NSCopying>

+ (id)mean:(id)arg1;
+ (id)median:(id)arg1;
+ (id)midrange:(id)arg1;
+ (id)multiply:(id)arg1 withScalar:(double)arg2;
+ (id)sum:(id)arg1;

- (void)add:(id)arg1;
- (long long)compare:(id)arg1;
- (id)convertToItemCompatibleWithItem:(id)arg1;
- (id)convertToItemCompatibleWithItem:(id)arg1 copyIfSameType:(bool)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)scalarMultiply:(double)arg1;
- (id)scalarProduct:(double)arg1;
- (id)sum:(id)arg1;

@end
