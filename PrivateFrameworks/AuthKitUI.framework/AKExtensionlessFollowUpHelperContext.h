
@interface AKExtensionlessFollowUpHelperContext : NSObject <NSSecureCoding> {
    NSDictionary * _additionalInfo;
    NSString * _akAction;
    NSString * _altDSID;
    UIViewController * _presentingViewController;
    NSString * _uniqueItemIdentifier;
    NSString * _urlKey;
}

@property (nonatomic, copy) NSDictionary *additionalInfo;
@property (nonatomic, copy) NSString *akAction;
@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic) UIViewController *presentingViewController;
@property (nonatomic, copy) NSString *uniqueItemIdentifier;
@property (nonatomic, copy) NSString *urlKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalInfo;
- (id)akAction;
- (id)altDSID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)presentingViewController;
- (void)setAdditionalInfo:(id)arg1;
- (void)setAkAction:(id)arg1;
- (void)setAltDSID:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setUniqueItemIdentifier:(id)arg1;
- (void)setUrlKey:(id)arg1;
- (id)uniqueItemIdentifier;
- (id)urlKey;

@end
