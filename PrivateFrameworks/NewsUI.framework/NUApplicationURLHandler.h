
@interface NUApplicationURLHandler : NSObject <NUURLHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)openURL:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;

@end
