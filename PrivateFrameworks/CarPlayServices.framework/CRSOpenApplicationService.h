
@interface CRSOpenApplicationService : NSObject {
    FBSOpenApplicationService * _openService;
}

+ (id)defaultService;

- (void).cxx_destruct;
- (void)openApplication:(id)arg1 completion:(id /* block */)arg2;

@end
