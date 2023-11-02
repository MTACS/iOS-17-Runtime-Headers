
@interface AMSAccountCachedServerDataResponse : NSObject <NSSecureCoding> {
    NSDictionary * _allAccountData;
}

@property (nonatomic, retain) NSDictionary *allAccountData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allAccountData;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAllAccountData:(id)arg1;

@end
