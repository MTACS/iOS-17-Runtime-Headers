
@interface WFChangeForecast : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _date;
    NSString * _descriptionDifferentTimeZone;
    NSString * _descriptionSameTimeZone;
}

@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly) NSString *descriptionDifferentTimeZone;
@property (nonatomic, readonly) NSString *descriptionSameTimeZone;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)descriptionDifferentTimeZone;
- (id)descriptionSameTimeZone;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 descriptionSameTimeZone:(id)arg2 descriptionDifferentTimeZone:(id)arg3;

@end
