
@interface CKFetchWebAuthTokenOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSString * _APIToken;
}

@property (nonatomic, retain) NSString *APIToken;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)APIToken;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAPIToken:(id)arg1;

@end
