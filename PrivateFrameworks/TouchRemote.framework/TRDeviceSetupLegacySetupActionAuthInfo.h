
@interface TRDeviceSetupLegacySetupActionAuthInfo : NSObject {
    NSDictionary * _body;
    NSDictionary * _headers;
}

@property (nonatomic, readonly) NSDictionary *body;
@property (nonatomic, readonly) NSDictionary *headers;

- (void).cxx_destruct;
- (id)body;
- (id)headers;
- (id)initWithHeaders:(id)arg1 body:(id)arg2;

@end
