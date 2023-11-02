
@interface CNContactRecentsReference : NSObject <NSSecureCoding> {
    NSString * _domain;
    NSNumber * _recentContactID;
}

@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSNumber *recentContactID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecentContactID:(id)arg1 domain:(id)arg2;
- (id)recentContactID;

@end
