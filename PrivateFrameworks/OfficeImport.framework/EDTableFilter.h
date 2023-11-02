
@interface EDTableFilter : NSObject {
    double  mFilterValue;
    int  mOperator;
    int  mScale;
    double  mValue;
}

+ (id)edTableFilter;

- (id)description;
- (double)filterValue;
- (int)operatorType;
- (int)scale;
- (void)setFilterValue:(double)arg1;
- (void)setOperatorType:(int)arg1;
- (void)setScale:(int)arg1;
- (void)setValue:(double)arg1;
- (double)value;

@end
