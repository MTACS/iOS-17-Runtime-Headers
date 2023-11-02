
@interface BSPathProviderFactory : NSObject

+ (id)pathProviderForCurrentContainer;
+ (id)pathProviderForSystemContainerForCurrentProcess;

@end
