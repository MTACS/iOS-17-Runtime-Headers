
@interface HUSymbolIconColorConfiguration : NSObject <HUSymbolIconColorConfiguration> {
    UIColor * _primaryColor;
}

@property (nonatomic, readonly) UIColor *activeIconBackgroundColor;
@property (nonatomic, readonly) UIColor *activeIconColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIColor *disabledIconBackgroundColor;
@property (nonatomic, readonly) UIColor *disabledIconColor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIColor *iconBackgroundColorInDescriptiveView;
@property (nonatomic, readonly) UIColor *iconColorInDescriptiveView;
@property (nonatomic, readonly) UIColor *inactiveIconBackgroundColor;
@property (nonatomic, readonly) UIColor *inactiveIconColor;
@property (nonatomic, retain) UIColor *primaryColor;
@property (readonly) Class superclass;

+ (id)iconColorConfigurationForItem:(id)arg1;
+ (id)iconColorConfigurationForSymbolIconAccessoryType:(id)arg1;
+ (id)iconColorConfigurationForSymbolIconIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)activeIconBackgroundColor;
- (id)activeIconColor;
- (id)disabledIconBackgroundColor;
- (id)disabledIconColor;
- (id)iconBackgroundColorInDescriptiveView;
- (id)iconColorInDescriptiveView;
- (id)inactiveIconBackgroundColor;
- (id)inactiveIconColor;
- (id)initWithPrimaryColor:(id)arg1;
- (id)primaryColor;
- (void)setPrimaryColor:(id)arg1;

@end
