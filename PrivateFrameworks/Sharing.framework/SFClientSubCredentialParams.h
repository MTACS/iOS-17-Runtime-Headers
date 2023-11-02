
@interface SFClientSubCredentialParams : NSObject <NSSecureCoding> {
    NSString * _adamID;
    NSArray * _adamIDs;
    NSString * _issuerID;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, copy) NSString *adamID;
@property (nonatomic, copy) NSArray *adamIDs;
@property (nonatomic, copy) NSString *issuerID;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)adamID;
- (id)adamIDs;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)issuerID;
- (void)setAdamID:(id)arg1;
- (void)setAdamIDs:(id)arg1;
- (void)setIssuerID:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
