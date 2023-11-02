
@interface PRMutableEditingLook : PREditingLook {
    NSString * _displayName;
    NSString * _identifier;
    PREditingLookProperties * _initialProperties;
}

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) PREditingLookProperties *initialProperties;
@property (nonatomic, copy) PRTimeFontConfiguration *initialTimeFontConfiguration;
@property (nonatomic, copy) id initialTitleColor;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 initialTimeFontConfiguration:(id)arg3 initialTitleColor:(id)arg4;
- (id)initialProperties;
- (id)initialTimeFontConfiguration;
- (id)initialTitleColor;
- (void)setDisplayName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInitialProperties:(id)arg1;
- (void)setInitialTimeFontConfiguration:(id)arg1;
- (void)setInitialTitleColor:(id)arg1;

@end
