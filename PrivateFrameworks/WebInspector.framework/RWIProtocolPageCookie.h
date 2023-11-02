
@interface RWIProtocolPageCookie : RWIProtocolJSONObject

@property (nonatomic, copy) NSString *domain;
@property (nonatomic) double expires;
@property (nonatomic) bool httpOnly;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *path;
@property (nonatomic) long long sameSite;
@property (nonatomic) bool secure;
@property (nonatomic) bool session;
@property (nonatomic, copy) NSString *value;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (id)domain;
- (double)expires;
- (bool)httpOnly;
- (id)initWithName:(id)arg1 value:(id)arg2 domain:(id)arg3 path:(id)arg4 expires:(double)arg5 session:(bool)arg6 httpOnly:(bool)arg7 secure:(bool)arg8 sameSite:(long long)arg9;
- (id)name;
- (id)path;
- (long long)sameSite;
- (bool)secure;
- (bool)session;
- (void)setDomain:(id)arg1;
- (void)setExpires:(double)arg1;
- (void)setHttpOnly:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setSameSite:(long long)arg1;
- (void)setSecure:(bool)arg1;
- (void)setSession:(bool)arg1;
- (void)setValue:(id)arg1;
- (id)value;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)safe_initWithName:(id)arg1 value:(id)arg2 domain:(id)arg3 path:(id)arg4 expires:(double)arg5 session:(bool)arg6 httpOnly:(bool)arg7 secure:(bool)arg8 sameSite:(long long)arg9;

@end
