
@protocol SUUIShelfPageSection <NSObject>

@required

- (SUUIShelfPageSectionConfiguration *)configuration;
- (id)initWithPageComponent:(SUUIShelfPageComponent *)arg1;
- (id)initWithPageComponent:(SUUIShelfPageComponent *)arg1 configuration:(SUUIShelfPageSectionConfiguration *)arg2;
- (SUUIShelfPageComponent *)pageComponent;

@end
