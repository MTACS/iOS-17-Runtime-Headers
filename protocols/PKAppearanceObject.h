
@protocol PKAppearanceObject <NSObject>

@required

- (void)pk_applyAppearance:(PKAppearanceSpecifier *)arg1;
- (NSArray *)pk_childrenForAppearance;

@end
