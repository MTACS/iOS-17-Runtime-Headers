
@interface PDUAppDisclosureStyle : NSObject {
    long long  _interfaceStyle;
    UIColor * _tintColor;
}

@property (nonatomic, readonly) long long interfaceStyle;
@property (nonatomic, readonly) UIColor *tintColor;

+ (id)styleWithApplication:(id)arg1;
+ (id)styleWithBundle:(id)arg1;

- (void).cxx_destruct;
- (void)_fetchStyleWithBundle:(id)arg1;
- (long long)_styleFromString:(id)arg1;
- (id)initWithBundle:(id)arg1;
- (long long)interfaceStyle;
- (id)tintColor;

@end
