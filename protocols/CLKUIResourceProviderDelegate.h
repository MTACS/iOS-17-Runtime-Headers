
@protocol CLKUIResourceProviderDelegate <NSObject>

@required

- (CLKUIAtlasBacking *)provideAtlasBacking:(NSString *)arg1;
- (CLKUIResourceProviderKey *)resourceProviderKey;

@end
