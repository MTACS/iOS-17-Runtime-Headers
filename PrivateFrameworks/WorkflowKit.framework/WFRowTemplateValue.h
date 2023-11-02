
@interface WFRowTemplateValue : NSObject <NSSecureCoding> {
    NSDate * _anotherDate;
    NSNumber * _boolean;
    NSNumber * _byteCountUnit;
    NSNumber * _calendarUnit;
    long long  _comparisonOperator;
    Class  _contentItemClass;
    NSString * _contentPropertyName;
    NSDate * _date;
    NSString * _email;
    <NSObject><NSCopying><NSCoding> * _enumeration;
    NSUnit * _measurementUnit;
    NSNumber * _number;
    NSString * _phone;
    bool  _removable;
    NSString * _string;
}

@property (nonatomic, retain) NSDate *anotherDate;
@property (nonatomic, retain) NSNumber *boolean;
@property (nonatomic, retain) NSNumber *byteCountUnit;
@property (nonatomic, retain) NSNumber *calendarUnit;
@property (nonatomic, readonly) long long comparisonOperator;
@property (nonatomic, readonly) Class contentItemClass;
@property (nonatomic, readonly) NSString *contentPropertyName;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) NSString *email;
@property (nonatomic, retain) <NSObject><NSCopying><NSCoding> *enumeration;
@property (nonatomic, retain) NSUnit *measurementUnit;
@property (nonatomic, retain) NSNumber *number;
@property (nonatomic, retain) NSString *phone;
@property (nonatomic, readonly) bool removable;
@property (nonatomic, retain) NSString *string;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anotherDate;
- (id)boolean;
- (id)byteCountUnit;
- (id)calendarUnit;
- (long long)comparisonOperator;
- (Class)contentItemClass;
- (id)contentPropertyName;
- (id)date;
- (id)email;
- (void)encodeWithCoder:(id)arg1;
- (id)enumeration;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentItemClass:(Class)arg1 contentPropertyName:(id)arg2 comparisonOperator:(long long)arg3 removable:(bool)arg4;
- (id)measurementUnit;
- (id)number;
- (id)phone;
- (bool)removable;
- (void)setAnotherDate:(id)arg1;
- (void)setBoolean:(id)arg1;
- (void)setByteCountUnit:(id)arg1;
- (void)setCalendarUnit:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setEmail:(id)arg1;
- (void)setEnumeration:(id)arg1;
- (void)setMeasurementUnit:(id)arg1;
- (void)setNumber:(id)arg1;
- (void)setPhone:(id)arg1;
- (void)setString:(id)arg1;
- (id)string;

@end
