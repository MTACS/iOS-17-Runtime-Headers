
@interface ManageSubscriptionsRequest : NSObject <NSSecureCoding> {
    NSString * _familyId;
}

@property (nonatomic, readonly) NSString *familyId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)familyId;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFamilyId:(id)arg1;

@end
