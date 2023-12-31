
@interface TSWPLineSpacing : NSObject <NSCopying> {
    double  _amount;
    double  _baselineRule;
    int  _mode;
}

+ (id)lineSpacing;

- (double)amount;
- (double)baselineRule;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithMode:(int)arg1 amount:(double)arg2;
- (id)initWithMode:(int)arg1 amount:(double)arg2 baselineRule:(double)arg3;
- (bool)isEqual:(id)arg1;
- (int)mode;

@end
