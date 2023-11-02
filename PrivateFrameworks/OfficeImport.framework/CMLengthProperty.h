
@interface CMLengthProperty : CMProperty {
    int  unitType;
    double  value;
}

+ (double)convertToPoints:(double)arg1 unit:(int)arg2;
+ (id)cssStringValue:(double)arg1 unit:(int)arg2;

- (void)addNumber:(double)arg1 unit:(int)arg2;
- (int)compareValue:(id)arg1;
- (id)cssString;
- (id)cssStringForName:(id)arg1;
- (id)description;
- (id)initWithNumber:(double)arg1;
- (id)initWithNumber:(double)arg1 unit:(int)arg2;
- (int)intValue;
- (int)unitType;
- (double)value;

@end
