
@interface LNCATDialog : LNDialog <NSSecureCoding> {
    NSString * _identifier;
    NSDictionary * _parameters;
    NSData * _securityScopeData;
    NSURL * _templateDirectoryURL;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSDictionary *parameters;
@property (nonatomic, retain) NSData *securityScopeData;
@property (nonatomic, readonly, copy) NSURL *templateDirectoryURL;

// Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 templateDirectoryURL:(id)arg2 parameters:(id)arg3 localeIdentifier:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)parameters;
- (id)securityScopeData;
- (void)setSecurityScopeData:(id)arg1;
- (id)templateDirectoryURL;

// Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices

- (void)getResultWithCompletionHandler:(id /* block */)arg1;

@end
