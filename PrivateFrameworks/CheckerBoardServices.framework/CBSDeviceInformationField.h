
@interface CBSDeviceInformationField : NSObject {
    unsigned long long  _format;
    NSString * _value;
}

@property (nonatomic) unsigned long long format;
@property (nonatomic, readonly) NSString *formattedTitle;
@property (nonatomic, readonly) NSString *formattedValue;
@property (nonatomic, readonly) NSArray *formattedValuesArray;
@property (nonatomic, readonly) bool multiLineFormatted;
@property (nonatomic, retain) NSString *value;

+ (id)fieldWithFormat:(unsigned long long)arg1 value:(id)arg2;

- (void).cxx_destruct;
- (id)_formattedIMEI:(id)arg1;
- (unsigned long long)format;
- (id)formattedTitle;
- (id)formattedValue;
- (id)formattedValuesArray;
- (id)initWithFormat:(unsigned long long)arg1 value:(id)arg2;
- (bool)multiLineFormatted;
- (void)setFormat:(unsigned long long)arg1;
- (void)setValue:(id)arg1;
- (id)title;
- (id)value;

@end
