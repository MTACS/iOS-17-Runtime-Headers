
@interface PKPlaceholderPassConfiguration : NSObject <NSSecureCoding> {
    NSArray * _associatedApplicationIdentifiers;
    PKPassAutomaticSelectionCriterion * _automaticSelectionCriterion;
    NSArray * _passFields;
    long long  _paymentApplicationState;
    PKAppletSubcredential * _subcredential;
}

@property (nonatomic, copy) NSArray *associatedApplicationIdentifiers;
@property (nonatomic, readonly) PKPassAutomaticSelectionCriterion *automaticSelectionCriterion;
@property (nonatomic, copy) NSArray *passFields;
@property (nonatomic, readonly) long long paymentApplicationState;
@property (nonatomic, readonly) PKAppletSubcredential *subcredential;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)associatedApplicationIdentifiers;
- (id)automaticSelectionCriterion;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubcredential:(id)arg1 automaticSelectionCriterion:(id)arg2;
- (id)passFields;
- (long long)paymentApplicationState;
- (void)setAssociatedApplicationIdentifiers:(id)arg1;
- (void)setPassFields:(id)arg1;
- (id)subcredential;

@end
