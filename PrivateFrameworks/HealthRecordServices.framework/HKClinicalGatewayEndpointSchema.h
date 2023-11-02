
@interface HKClinicalGatewayEndpointSchema : NSObject <NSCopying, NSSecureCoding> {
    NSString * _URL;
    NSString * _auth;
    NSDictionary * _body;
    bool  _enabled;
    NSArray * _form;
    NSArray * _headers;
    NSString * _method;
    long long  _minCompatibleAPIVersion;
    NSString * _name;
    NSArray * _query;
}

@property (nonatomic, readonly, copy) NSString *URL;
@property (nonatomic, readonly, copy) NSString *auth;
@property (nonatomic, readonly, copy) NSDictionary *body;
@property (nonatomic, readonly) bool enabled;
@property (nonatomic, readonly, copy) NSArray *form;
@property (nonatomic, readonly, copy) NSArray *headers;
@property (nonatomic, readonly, copy) NSString *method;
@property (nonatomic, readonly) long long minCompatibleAPIVersion;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSArray *query;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)auth;
- (id)body;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)enabled;
- (void)encodeWithCoder:(id)arg1;
- (id)form;
- (unsigned long long)hash;
- (id)headers;
- (id)init;
- (id)initWithAuth:(id)arg1 body:(id)arg2 enabled:(bool)arg3 form:(id)arg4 headers:(id)arg5 method:(id)arg6 minCompatibleAPIVersion:(long long)arg7 name:(id)arg8 query:(id)arg9 URL:(id)arg10;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)method;
- (long long)minCompatibleAPIVersion;
- (id)name;
- (id)query;

@end
