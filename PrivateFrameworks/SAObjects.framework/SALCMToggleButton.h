
@interface SALCMToggleButton : SAAceView

@property (nonatomic, retain) SABaseCommand *commandToToggleToOffMode;
@property (nonatomic, retain) SABaseCommand *commandToToggleToOnMode;
@property (nonatomic, copy) NSDictionary *offIconDynamicImage;
@property (nonatomic, copy) NSString *offTitle;
@property (nonatomic, copy) NSDictionary *onIconDynamicImage;
@property (nonatomic, copy) NSString *onTitle;

+ (id)toggleButton;
+ (id)toggleButtonWithDictionary:(id)arg1 context:(id)arg2;

- (id)commandToToggleToOffMode;
- (id)commandToToggleToOnMode;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)offIconDynamicImage;
- (id)offTitle;
- (id)onIconDynamicImage;
- (id)onTitle;
- (void)setCommandToToggleToOffMode:(id)arg1;
- (void)setCommandToToggleToOnMode:(id)arg1;
- (void)setOffIconDynamicImage:(id)arg1;
- (void)setOffTitle:(id)arg1;
- (void)setOnIconDynamicImage:(id)arg1;
- (void)setOnTitle:(id)arg1;

@end
