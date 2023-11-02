
@interface PKPeerPaymentAdditionalPushTopics : NSObject <NSCopying, NSSecureCoding> {
    NSString * _associatedAccounts;
    NSString * _endpoint;
    NSString * _preferences;
    NSString * _requests;
}

@property (nonatomic, copy) NSString *associatedAccounts;
@property (nonatomic, copy) NSString *endpoint;
@property (nonatomic, copy) NSString *preferences;
@property (nonatomic, copy) NSString *requests;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)associatedAccounts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endpoint;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)preferences;
- (id)requests;
- (void)setAssociatedAccounts:(id)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setPreferences:(id)arg1;
- (void)setRequests:(id)arg1;

@end
