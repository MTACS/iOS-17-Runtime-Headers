
@interface TIKBAnalyticsMetricsContext : TIAnalyticsMetricsContext {
    NSString * _inputVariant;
    unsigned char  _keyboardType;
    NSString * _layoutName;
    NSString * _secondaryLanguage;
    NSString * _secondaryRegion;
    NSDictionary * _testingParameters;
    long long  _userInterfaceIdiom;
}

@property (nonatomic, readonly) NSString *inputVariant;
@property (nonatomic, readonly) unsigned char keyboardType;
@property (nonatomic, readonly) NSString *layoutName;
@property (nonatomic, readonly) NSString *secondaryLanguage;
@property (nonatomic, readonly) NSString *secondaryRegion;
@property (nonatomic, readonly) NSDictionary *testingParameters;
@property (nonatomic, readonly) long long userInterfaceIdiom;

+ (id)keyboardTypeEnumToString:(unsigned char)arg1;
+ (unsigned char)keyboardTypeStringToEnum:(id)arg1;
+ (bool)supportsSecureCoding;
+ (long long)userInterfaceIdiomStringToEnum:(id)arg1;
+ (id)userInterfaceIdiomToString:(long long)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultLanguageOrRegionFromInputMode:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithInputLanguage:(id)arg1 inputRegion:(id)arg2 inputVariant:(id)arg3 secondaryLanguage:(id)arg4 secondaryRegion:(id)arg5 layoutName:(id)arg6 keyboardType:(unsigned char)arg7 userInterfaceIdiom:(long long)arg8 testingParameters:(id)arg9;
- (id)initWithInputLanguage:(id)arg1 inputRegion:(id)arg2 layoutName:(id)arg3 keyboardType:(unsigned char)arg4 userInterfaceIdiom:(long long)arg5;
- (id)initWithInputLanguage:(id)arg1 inputRegion:(id)arg2 layoutName:(id)arg3 keyboardType:(unsigned char)arg4 userInterfaceIdiom:(long long)arg5 testingParameters:(id)arg6;
- (id)initWithKeyboardState:(id)arg1 activeInputModes:(id)arg2 testingParameters:(id)arg3;
- (id)inputVariant;
- (bool)isEqual:(id)arg1;
- (unsigned char)keyboardType;
- (id)layoutName;
- (id)secondaryLanguage;
- (id)secondaryRegion;
- (id)testingParameters;
- (long long)userInterfaceIdiom;

@end
