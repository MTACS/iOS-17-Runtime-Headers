
@interface AKGlobalConfig : NSObject

+ (id)sharedInstance;

- (void)fetchGlobalConfigUsingCachePolicy:(unsigned long long)arg1 completion:(id /* block */)arg2;

@end
