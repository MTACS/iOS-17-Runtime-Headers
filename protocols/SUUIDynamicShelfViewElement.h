
@protocol SUUIDynamicShelfViewElement <NSObject>

@required

- (SUUIViewElement *)cellTemplateViewElement;
- (<SUUIEntityProviding> *)entityProvider;

@end
