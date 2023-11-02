
@interface WBSFormFieldClassificationCorrector : NSObject {
    WBSFormAutoFillClassificationToCorrectionsTransformer * _classificationToCorrectionsTransformer;
    <WBSFormFieldClassificationCorrectorDelegate> * _delegate;
    NSString * _domain;
    WBSFormMetadata * _formMetadata;
    NSDictionary * _formValues;
    NSSet * _uniqueIDsOfControlsThatWereAutoFilled;
}

@property (nonatomic) <WBSFormFieldClassificationCorrectorDelegate> *delegate;
@property (nonatomic, readonly, copy) NSString *domain;
@property (nonatomic, readonly, copy) WBSFormMetadata *formMetadata;
@property (nonatomic, readonly, copy) NSDictionary *formValues;

- (void).cxx_destruct;
- (id)_classificationCorrectionsForControlWithMetadata:(id)arg1 wasIdentifiedAsAddressBookField:(bool*)arg2;
- (id)delegate;
- (id)domain;
- (id)formMetadata;
- (id)formValues;
- (id)init;
- (id)initWithDomain:(id)arg1 formMetadata:(id)arg2 formValues:(id)arg3 uniqueIDsOfControlsThatWereAutoFilled:(id)arg4;
- (void)processCorrections;
- (void)setDelegate:(id)arg1;

@end
