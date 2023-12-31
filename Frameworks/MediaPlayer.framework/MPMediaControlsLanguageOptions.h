
@interface MPMediaControlsLanguageOptions : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _center;
    NSString * _routeUID;
}

- (void).cxx_destruct;
- (id)initWithRouteUID:(id)arg1 atCenter:(struct CGPoint { double x1; double x2; })arg2;
- (void)presentWithCompletion:(id /* block */)arg1;

@end
