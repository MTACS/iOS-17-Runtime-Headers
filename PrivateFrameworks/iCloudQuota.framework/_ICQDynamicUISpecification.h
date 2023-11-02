
@interface _ICQDynamicUISpecification : NSObject {
    NSString * _attributionSuffix;
    NSURL * _pageContentsURL;
    NSURL * _routeURL;
}

@property (nonatomic, readonly) NSString *attributionSuffix;
@property (nonatomic, readonly) NSURL *pageContentsURL;
@property (nonatomic, readonly) NSURL *routeURL;

- (void).cxx_destruct;
- (id)attributionSuffix;
- (id)initWithRouteURL:(id)arg1 pageContentsURL:(id)arg2 attributionSuffix:(id)arg3;
- (id)pageContentsURL;
- (id)routeURL;

@end
