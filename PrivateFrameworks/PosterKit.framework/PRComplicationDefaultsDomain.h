
@interface PRComplicationDefaultsDomain : BSAbstractDefaultDomain

@property (nonatomic) bool hasShownLandscapeEducation;
@property (nonatomic) bool hasShownPortraitEducation;

- (void)_bindAndRegisterDefaults;
- (id)init;

@end
