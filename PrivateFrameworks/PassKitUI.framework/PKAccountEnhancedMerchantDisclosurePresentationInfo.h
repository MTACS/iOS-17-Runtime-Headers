
@interface PKAccountEnhancedMerchantDisclosurePresentationInfo : NSObject <PKIdentifiable> {
    NSString * _disclosures;
    PKAccountEnhancedMerchant * _enhancedMerchant;
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *disclosures;
@property (nonatomic, retain) PKAccountEnhancedMerchant *enhancedMerchant;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (nonatomic, retain) NSString *name;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)disclosures;
- (id)enhancedMerchant;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithAccountEnhancedMerchant:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAccountEnhancedMerchantDisclosure:(id)arg1;
- (id)name;
- (void)setDisclosures:(id)arg1;
- (void)setEnhancedMerchant:(id)arg1;
- (void)setName:(id)arg1;

@end
