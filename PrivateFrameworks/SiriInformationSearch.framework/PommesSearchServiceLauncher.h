
@interface PommesSearchServiceLauncher : NSObject {
    PommesSearchXPCServer * _pommesSearchService;
}

@property (nonatomic, readonly) PommesSearchXPCServer *pommesSearchService;

- (void).cxx_destruct;
- (id)init;
- (id)pommesSearchService;

@end
