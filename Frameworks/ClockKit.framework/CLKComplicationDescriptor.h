
@interface CLKComplicationDescriptor : NSObject <NSCopying, NSSecureCoding> {
    CLKUserActivity * _clkUserActivity;
    NSString * _displayName;
    NSString * _identifier;
    NSLocale * _locale;
    bool  _needsAppNotify;
    NSArray * _supportedFamilies;
    NSDictionary * _userInfo;
    CLKWidgetComplicationDescriptor * _widgetDescriptor;
}

@property (nonatomic, retain) CLKUserActivity *clkUserActivity;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic) bool needsAppNotify;
@property (nonatomic, readonly) NSArray *supportedFamilies;
@property (nonatomic, readonly) NSUserActivity *userActivity;
@property (nonatomic, readonly) NSDictionary *userInfo;
@property (nonatomic, retain) CLKWidgetComplicationDescriptor *widgetDescriptor;

+ (id)allowedDictionaryClasses;
+ (id)legacyComplicationDescriptor;
+ (id)legacyComplicationDescriptorWithSupportedFamilies:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (id)clkUserActivity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasUserInfo;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 supportedFamilies:(id)arg3;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 supportedFamilies:(id)arg3 userActivity:(id)arg4;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 supportedFamilies:(id)arg3 userInfo:(id)arg4;
- (id)initWithJSONObjectRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (bool)needsAppNotify;
- (void)setClkUserActivity:(id)arg1;
- (void)setNeedsAppNotify:(bool)arg1;
- (void)setWidgetDescriptor:(id)arg1;
- (id)supportedFamilies;
- (id)userActivity;
- (id)userInfo;
- (void)validate;
- (id)widgetDescriptor;

@end
