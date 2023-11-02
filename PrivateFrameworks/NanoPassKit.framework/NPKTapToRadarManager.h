
@interface NPKTapToRadarManager : NSObject

- (id)_applicationWorkSpace;
- (void)_openTapToRadarWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_requestUserPermisionToFileRadarWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)fileRadarWithRequest:(id)arg1 requestUserPermision:(bool)arg2 completion:(id /* block */)arg3;

@end
