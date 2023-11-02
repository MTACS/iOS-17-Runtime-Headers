
@interface ICQLink : NSObject <NSSecureCoding> {
    long long  _action;
    NSURL * _actionURL;
    long long  _options;
    NSDictionary * _parameters;
    NSURL * _serverUIURL;
    NSString * _text;
}

@property (nonatomic, readonly) long long action;
@property (nonatomic, retain) NSURL *actionURL;
@property (nonatomic, readonly) NSURL *dynamicUIRouteURL;
@property (nonatomic, readonly) long long options;
@property (nonatomic, readonly, copy) NSDictionary *parameters;
@property (nonatomic, readonly) NSString *purchaseAttribution;
@property (nonatomic, retain) NSURL *serverUIURL;
@property (nonatomic, readonly, copy) NSString *text;

+ (id)_icqDismissLinkForServerMessageParameters:(id)arg1;
+ (void)addHeadersToRequest:(id)arg1;
+ (void)addPOSTParams:(id)arg1 toRequest:(id)arg2;
+ (id)linkWithText:(id)arg1 action:(long long)arg2 parameters:(id)arg3;
+ (id)linkWithText:(id)arg1 options:(long long)arg2 action:(long long)arg3 parameters:(id)arg4;
+ (bool)performAction:(long long)arg1 parameters:(id)arg2 options:(long long)arg3;
+ (void)performHTTPGETCallWithParams:(id)arg1 options:(long long)arg2;
+ (void)performHTTPPOSTCallWithParams:(id)arg1 options:(long long)arg2;
+ (void)startDataTaskWithRequest:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)urlRequestWithParams:(id)arg1 options:(long long)arg2;
+ (id)urlSession;

- (void).cxx_destruct;
- (long long)action;
- (id)actionURL;
- (id)description;
- (id)dynamicUIRouteURL;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAction:(long long)arg1;
- (id)initWithAction:(long long)arg1 url:(id)arg2;
- (id)initWithActionString:(id)arg1;
- (id)initWithActionString:(id)arg1 url:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 action:(long long)arg2 parameters:(id)arg3;
- (id)initWithText:(id)arg1 options:(long long)arg2 action:(long long)arg3 parameters:(id)arg4;
- (long long)options;
- (id)parameters;
- (bool)performAction;
- (bool)performActionWithOptions:(long long)arg1;
- (id)purchaseAttribution;
- (id)serverUIURL;
- (void)setActionURL:(id)arg1;
- (void)setServerUIURL:(id)arg1;
- (id)text;

@end
