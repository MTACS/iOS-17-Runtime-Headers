
@protocol HKClinicalBrandable <NSObject>

@required

- (HKClinicalBrand *)brand;
- (NSString *)subtitle;
- (NSString *)title;

@end
