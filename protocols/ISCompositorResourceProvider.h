
@protocol ISCompositorResourceProvider <NSObject>

@required

- (<ISCompositorResource> *)resourceNamed:(NSString *)arg1;

@optional

- (<ISCompositorResource> *)resourceForKey:(ISCompositorResourceProviderKey *)arg1;

@end
