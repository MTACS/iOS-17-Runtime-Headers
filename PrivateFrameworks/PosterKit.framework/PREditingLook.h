
@interface PREditingLook : NSObject <BSDescriptionStreamable, NSCopying, NSMutableCopying>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly) NSString *groupName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) PREditingLookProperties *initialProperties;
@property (nonatomic, readonly, copy) PRTimeFontConfiguration *initialTimeFontConfiguration;
@property (nonatomic, readonly, copy) PRPosterColor *initialTitleColor;
@property (readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)groupName;
- (unsigned long long)hash;
- (id)initWithDisplayName:(id)arg1;
- (id)initWithDisplayName:(id)arg1 initialTimeFont:(id)arg2 initialTitleColor:(id)arg3;
- (id)initWithDisplayName:(id)arg1 initialTimeFontConfiguration:(id)arg2 initialTitleColor:(id)arg3;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 initialTimeFont:(id)arg3 initialTitleColor:(id)arg4;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 initialTimeFontConfiguration:(id)arg3 initialTitleColor:(id)arg4;
- (id)initWithLook:(id)arg1;
- (id)initialTimeFontConfiguration;
- (id)initialTitleColor;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)titleStyleConfigurationWithExtensionBundle:(id)arg1 luminance:(double)arg2 timeNumberingSystem:(id)arg3;

@end
