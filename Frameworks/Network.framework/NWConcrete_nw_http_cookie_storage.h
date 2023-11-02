
@interface NWConcrete_nw_http_cookie_storage : NSObject <OS_nw_http_cookie_storage> {
    NSHTTPCookieStorage * cookieStorage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;

@end
