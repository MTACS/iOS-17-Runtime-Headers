
@interface MKURLContext : NSObject {
    GEOCompanionRouteContext * _companionRouteContext;
    bool  _originatedFromWatch;
}

@property (nonatomic, readonly, copy) GEOCompanionRouteContext *companionRouteContext;
@property (nonatomic, readonly) bool originatedFromWatch;

- (void).cxx_destruct;
- (id)companionRouteContext;
- (id)initWithOriginatedFromWatch:(bool)arg1 companionRouteContext:(id)arg2;
- (bool)originatedFromWatch;

@end
