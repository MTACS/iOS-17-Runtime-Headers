
@interface AXMDataPointValue : NSObject <NSCopying> {
    NSString * _category;
    bool  _isEmptyValue;
    double  _number;
}

@property (nonatomic, copy) NSString *category;
@property (nonatomic, readonly) bool isEmptyValue;
@property (nonatomic) double number;

+ (id)emptyValue;
+ (id)valueWithCategory:(id)arg1;
+ (id)valueWithNumber:(double)arg1;

- (void).cxx_destruct;
- (id)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)isEmptyValue;
- (double)number;
- (void)setCategory:(id)arg1;
- (void)setIsEmptyValue:(bool)arg1;
- (void)setNumber:(double)arg1;

@end
