
@interface WFDatePickerConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSString * _datePickerMode;
    NSDate * _defaultDate;
    NSDate * _maximumDate;
    NSDate * _minimumDate;
}

@property (nonatomic, copy) NSString *datePickerMode;
@property (nonatomic, retain) NSDate *defaultDate;
@property (nonatomic, retain) NSDate *maximumDate;
@property (nonatomic, retain) NSDate *minimumDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)datePickerMode;
- (id)defaultDate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)maximumDate;
- (id)minimumDate;
- (void)setDatePickerMode:(id)arg1;
- (void)setDefaultDate:(id)arg1;
- (void)setMaximumDate:(id)arg1;
- (void)setMinimumDate:(id)arg1;

@end
