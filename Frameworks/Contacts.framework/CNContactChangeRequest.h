
@interface CNContactChangeRequest : NSObject <NSSecureCoding> {
    NSArray * _contacts;
    long long  _kind;
    NSString * _linkIdentifier;
}

@property (nonatomic, readonly, copy) NSArray *contactIdentifiers;
@property (nonatomic, readonly, copy) NSArray *contacts;
@property (nonatomic, readonly) long long kind;
@property (nonatomic, readonly, copy) NSString *linkIdentifier;

+ (id)contactChangeRequestWithKind:(long long)arg1 contacts:(id)arg2 linkIdentifier:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contactIdentifiers;
- (id)contacts;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKind:(long long)arg1 contacts:(id)arg2 linkIdentifier:(id)arg3;
- (long long)kind;
- (id)linkIdentifier;

@end
