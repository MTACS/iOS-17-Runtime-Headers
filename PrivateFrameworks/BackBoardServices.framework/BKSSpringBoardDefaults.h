
@interface BKSSpringBoardDefaults : BSAbstractDefaultDomain

@property (nonatomic) float brightness;

- (void)_bindAndRegisterDefaults;
- (id)init;

@end
