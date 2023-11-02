
@interface GEOMapRequestManager : NSObject {
    geo_isolater * _isolater;
    NSMutableSet * _requests;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)requestComplete:(id)arg1;
- (void)trackRequest:(id)arg1;

@end
