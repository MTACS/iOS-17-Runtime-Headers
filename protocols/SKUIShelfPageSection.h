
@protocol SKUIShelfPageSection <NSObject>

@required

- (SKUIShelfPageSectionConfiguration *)configuration;
- (id)initWithPageComponent:(SKUIShelfPageComponent *)arg1;
- (id)initWithPageComponent:(SKUIShelfPageComponent *)arg1 configuration:(SKUIShelfPageSectionConfiguration *)arg2;
- (SKUIShelfPageComponent *)pageComponent;

@end
