
@interface HUQuickControlPushButtonViewProfile : HUQuickControlViewProfile <HUQuickControlIncrementalConvertibleProfile> {
    bool  _toggleColorScheme;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasSecondaryValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HFNumberValueConstraints *primaryValueConstraints;
@property (nonatomic, readonly) HFNumberValueConstraints *secondaryValueConstraints;
@property (readonly) Class superclass;
@property (nonatomic) bool toggleColorScheme;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)hasSecondaryValue;
- (id)init;
- (id)primaryValueConstraints;
- (id)secondaryValueConstraints;
- (void)setToggleColorScheme:(bool)arg1;
- (bool)toggleColorScheme;

@end
