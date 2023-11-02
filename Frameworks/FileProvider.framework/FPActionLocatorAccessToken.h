
@interface FPActionLocatorAccessToken : NSObject <FPActionLocatorAccess> {
    id /* block */  _stopBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)tokenWithBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (void)stopAccessing;

@end
