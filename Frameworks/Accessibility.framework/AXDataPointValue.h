
@interface AXDataPointValue : NSObject <NSCopying> {
    NSString * _category;
    double  _number;
}

@property (nonatomic, copy) NSString *category;
@property (nonatomic) double number;

+ (id)valueWithCategory:(id)arg1;
+ (id)valueWithNumber:(double)arg1;

- (void).cxx_destruct;
- (id)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)number;
- (void)setCategory:(id)arg1;
- (void)setNumber:(double)arg1;

@end
