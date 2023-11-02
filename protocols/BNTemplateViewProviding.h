
@protocol BNTemplateViewProviding <BNTemplateItemProviding>

@required

- (UIButtonConfiguration *)templateItemButtonConfiguration;
- (<BNImageProviding> *)templateItemImageProvider;

@end
