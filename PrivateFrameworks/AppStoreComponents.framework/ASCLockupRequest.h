
@interface ASCLockupRequest : NSObject <NSCopying, NSSecureCoding> {
    NSString * _clientID;
    NSString * _context;
    ASCAdamID * _id;
    NSString * _kind;
    NSDictionary * _mediaQueryParams;
}

@property (nonatomic, readonly, copy) NSString *clientID;
@property (nonatomic, readonly, copy) NSString *context;
@property (nonatomic, readonly, copy) ASCAdamID *id;
@property (nonatomic, readonly, copy) NSString *kind;
@property (nonatomic, readonly, copy) NSDictionary *mediaQueryParams;

+ (id)_requestWithID:(id)arg1 kind:(id)arg2 context:(id)arg3 clientID:(id)arg4;
+ (id)_requestWithID:(id)arg1 kind:(id)arg2 context:(id)arg3 includeUnlistedApps:(bool)arg4;
+ (id)_requestWithID:(id)arg1 kind:(id)arg2 context:(id)arg3 minExternalVersionID:(id)arg4 latestReleaseID:(id)arg5 productVariantID:(id)arg6;
+ (id)_requestWithID:(id)arg1 kind:(id)arg2 context:(id)arg3 productVariantID:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithID:(id)arg1 kind:(id)arg2 context:(id)arg3 clientID:(id)arg4;
- (id)_initWithID:(id)arg1 kind:(id)arg2 context:(id)arg3 includeUnlistedApps:(bool)arg4;
- (id)_initWithID:(id)arg1 kind:(id)arg2 context:(id)arg3 minExternalVersionID:(id)arg4 latestReleaseID:(id)arg5 productVariantID:(id)arg6;
- (id)_lockupRequestWithClientID:(id)arg1;
- (id)clientID;
- (id)clone;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)id;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 kind:(id)arg2 context:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)kind;
- (id)lockupRequestByAddingMediaQueryParams:(id)arg1;
- (id)lockupRequestWithClientID:(id)arg1;
- (id)lockupRequestWithMediaQueryParams:(id)arg1;
- (id)lockupRequestWithUnlistedAppsIncluded;
- (id)mediaQueryParams;

@end
